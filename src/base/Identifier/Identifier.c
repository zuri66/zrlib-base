/**
 * @author zuri
 * @date sam. 25 juil. 2020 15:28:45 CEST
 */

#include <zrlib/base/Identifier/Identifier.h>

void ZRIdentifier_done(ZRIdentifier *identifier)
{
	ZRIDENTIFIER_DONE(identifier);
}

void ZRIdentifier_destroy(ZRIdentifier *identifier)
{
	ZRIDENTIFIER_DESTROY(identifier);
}

size_t ZRIdentifier_nbObj(ZRIdentifier *identifier)
{
	return ZRIDENTIFIER_NBOBJ(identifier);
}

ZRID ZRIdentifier_getID(ZRIdentifier *identifier, void *obj)
{
	return ZRIDENTIFIER_GETID(identifier, obj);
}

void* ZRIdentifier_intern(ZRIdentifier *identifier, void *obj)
{
	return ZRIDENTIFIER_INTERN(identifier, obj);
}

void* ZRIdentifier_fromID(ZRIdentifier *identifier, ZRID id)
{
	return ZRIDENTIFIER_FROMID(identifier, id);
}

ZRObjectP ZRIdentifier_objectP(ZRIdentifier *identifier, ZRID id)
{
	return ZRIdentifier_objectP(identifier, id);
}

bool ZRIdentifier_contains(ZRIdentifier *identifier, void *obj)
{
	return ZRIDENTIFIER_CONTAINS(identifier, obj);
}

bool ZRIdentifier_release(ZRIdentifier *identifier, void *obj)
{
	return ZRIDENTIFIER_RELEASE(identifier, obj);
}

bool ZRIdentifier_releaseID(ZRIdentifier *identifier, ZRID id)
{
	return ZRIDENTIFIER_RELEASEID(identifier, id);
}

bool ZRIdentifier_releaseAll(ZRIdentifier *identifier)
{
	return ZRIDENTIFIER_RELEASEALL(identifier);
}
