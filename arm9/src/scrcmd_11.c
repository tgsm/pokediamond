#include "scrcmd.h"
#include "unk_02029FB0.h"

extern void* FUN_02039438(struct UnkSavStruct80*, int idx);

extern void FUN_0202A0E8(struct UnkStruct_02029FB0*, int);
extern void FUN_0202A170(struct UnkStruct_02029FB0*, int);
extern u8 FUN_0204B5FC(struct UnkSavStruct80*, void*);
extern void FUN_0204B57C(struct UnkSavStruct80*, void*, int);
extern u16 FUN_0204B63C(struct UnkSavStruct80*, void*);
extern u16 FUN_0204B660(struct UnkSavStruct80*, void*);
extern u16 FUN_0204B684(struct UnkSavStruct80*, void*);
extern u16 FUN_0204B6A4(struct UnkSavStruct80*, void*);
extern void FUN_0204B9CC(struct UnkSavStruct80*);
extern void FUN_0204B5A8(struct UnkSavStruct80*, void*, u16);
extern void FUN_0204B9A0(struct UnkSavStruct80*);
extern void FUN_0204B4FC(struct UnkSavStruct80*, void*);

THUMB_FUNC BOOL ScrCmd_Unk017D(struct ScriptContext* ctx)
{
    u16* ret_ptr = GetVarPointer(ctx->unk80, ScriptReadHalfword(ctx));
    void** unk = FUN_02039438(ctx->unk80, 10);

    *ret_ptr = FUN_0204B5FC(ctx->unk80, *unk);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk017E(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    u16* ret_ptr = GetVarPointer(ctx->unk80, ScriptReadHalfword(ctx));

    *ret_ptr = FUN_0204B63C(ctx->unk80, *unk);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk017F(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    u16* ret_ptr = GetVarPointer(ctx->unk80, ScriptReadHalfword(ctx));

    *ret_ptr = FUN_0204B660(ctx->unk80, *unk);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk0180(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    u16* ret_ptr = GetVarPointer(ctx->unk80, ScriptReadHalfword(ctx));

    *ret_ptr = FUN_0204B684(ctx->unk80, *unk);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk0181(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    u16* ret_ptr = GetVarPointer(ctx->unk80, ScriptReadHalfword(ctx));

    *ret_ptr = FUN_0204B6A4(ctx->unk80, *unk);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk0182(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    u16 unk2 = VarGet(ctx->unk80, ScriptReadHalfword(ctx));

    FUN_0204B57C(ctx->unk80, *unk, unk2);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk0183(struct ScriptContext* ctx)
{
    void** unk = FUN_02039438(ctx->unk80, 10);
    struct UnkStruct_02029FB0* unk2 = FUN_02029FC8(ctx->unk80->saveBlock2);
    u16 unk3 = VarGet(ctx->unk80, ScriptReadHalfword(ctx));

    FUN_0204B5A8(ctx->unk80, *unk, unk3);
    FUN_0202A0E8(unk2, 3);

    return FALSE;
}

THUMB_FUNC BOOL ScrCmd_Unk0184(struct ScriptContext* ctx)
{
    u16 unk = ScriptReadHalfword(ctx);

    switch (unk)
    {
    case 0:
        FUN_0204B9A0(ctx->unk80);
        break;
    case 1:
        FUN_0204B9CC(ctx->unk80);
        break;
    default:
        GF_ASSERT(FALSE);
        break;
    }

    return TRUE;
}

THUMB_FUNC BOOL ScrCmd_Unk0185(struct ScriptContext* ctx)
{
    struct UnkStruct_02029FB0* unk = FUN_02029FC8(ctx->unk80->saveBlock2);
    void** unk2 = FUN_02039438(ctx->unk80, 10);

    FUN_0204B4FC(ctx->unk80, *unk2);
    FUN_0202A170(unk, 0);

    return FALSE;
}