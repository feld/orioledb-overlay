--- src/btree/io.c.orig	2026-09-30 22:24:19 UTC
+++ src/btree/io.c
@@ -890,6 +890,16 @@ punch_fd_hole(int fd, off_t offset, off_t length, cons
 		hole.fp_length = length;
 		ret = fcntl(fd, F_PUNCHHOLE, &hole);
 	}
+#elif __FreeBSD__
+	{
+		struct spacectl_range rqsr;
+
+		rqsr.r_offset = offset;
+		rqsr.r_len = length;
+		do
+			ret = fspacectl(fd, SPACECTL_DEALLOC, &rqsr, 0, &rqsr);
+		while (ret == 0 && rqsr.r_len > 0);
+	}
 #else
 	ret = fallocate(fd, FALLOC_FL_PUNCH_HOLE | FALLOC_FL_KEEP_SIZE,
 					offset, length);
