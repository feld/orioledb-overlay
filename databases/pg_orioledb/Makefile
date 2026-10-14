PORTNAME=	pg_orioledb
PORTVERSION=	1.10
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql${PGSQL_VER:S/.//}-

MAINTAINER=	feld@FreeBSD.org
COMMENT=	A modern cloud-native storage engine
WWW=		https://github.com/orioledb/orioledb

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		gettext-runtime gmake pgsql:16,17,18 python:build
LLD_UNSAFE=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	orioledb
GH_PROJECT=	orioledb
GH_TAGNAME=	beta19

WANT_PGSQL=	server
MAKE_ARGS=	USE_PGXS=1

BINARY_ALIAS=	python3=${PYTHON_CMD}

.include <bsd.port.mk>
