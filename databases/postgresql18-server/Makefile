DISTVERSION?=	18.3
# PORTREVISION must be ?= otherwise, all slave ports get this PORTREVISION and
# not their own.  Probably best to keep it at ?=0 when reset here too.
PORTREVISION?=	0

MAINTAINER?=	pgsql@FreeBSD.org

INSTALL_DIRS?=	src/common src/timezone src/backend \
		src/backend/utils/mb/conversion_procs \
		src/backend/snowball src/backend/replication/libpqwalreceiver \
		src/backend/replication/pgoutput \
		src/bin/initdb src/bin/pg_ctl \
		src/bin/pg_archivecleanup src/bin/pg_basebackup \
		src/bin/pg_checksums src/bin/pg_combinebackup \
		src/bin/pg_controldata src/bin/pg_resetwal src/pl \
		src/bin/pg_rewind \
		src/bin/pg_test_fsync src/bin/pg_test_timing \
		src/bin/pg_waldump src/bin/pg_walsummary src/bin/pg_upgrade

PG_USER?=	postgres
PG_GROUP?=	postgres
PG_UID?=	770

MASTER_SITES=
USE_GITHUB=	yes
GH_ACCOUNT=	orioledb
GH_PROJECT=	postgres
GH_TAGNAME=	patches18_3

WRKSRC=	${WRKDIR}/postgres-${GH_TAGNAME}

.include "${.CURDIR}/../postgresql19-server/Makefile"
