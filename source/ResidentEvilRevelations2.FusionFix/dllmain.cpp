#include "stdafx.h"

static constexpr float fDiff = (1280.0f / (936.0f - 136.0f));
static constexpr float fDiffInv = 1.0f / fDiff;

enum GUI
{
    uBioGUI__cResourceParam = 0x13BF0D8,
    uBioGUISubtitles = 0x13BBC30,
    uGUIAchieveCutin = 0x13977F0,
    uGUIActionIcon = 0x1391608,
    uGUIActionIcon2 = 0x13919C8,
    uGUIAppraise = 0x1391B70,
    uGUIAppraisePopup = 0x1391CD8,
    uGUIBonusGallery = 0x1392520,
    uGUIBonusOver = 0x13927B0,
    uGUIBonusPoint = 0x1392978,
    uGUIBonusRecord = 0x1392B70,
    uGUIBonusSettings = 0x1392E98,
    uGUIChallengeMedal = 0x1393790,
    uGUICommandBase = 0x139AA40,
    uGUICommandFar = 0x139AB98,
    uGUICommandNear = 0x139ACF8,
    uGUICommonMenu = 0x13950C8,
    uGUIComposePartsRaid__cParts = 0x1395C10,
    uGUIComsoon = 0x1396080,
    uGUIContinueInfo = 0x13961D8,
    uGUICustomCutin = 0x1396390,
    uGUICustomInfo = 0x1396570,
    uGUICustomWeapon__cWeapon = 0x13968B0,
    uGUICustomWeaponRaid = 0x1396BA0,
    uGUICutin = 0x1397950,
    uGUICWRPartsInfo = 0x1396D00,
    uGUICWRPartsList__cParts = 0x1396EA8,
    uGUICWRTipsBase = 0x1397030,
    uGUICWRWeaponInfo = 0x13971A0,
    uGUICWRWeaponList__cWeapon = 0x1397400,
    uGUIDamage = 0x1397DA0,
    uGUIDamage2 = 0x1397EF0,
    uGUIDamageNum = 0x139C028,
    uGUIDead = 0x1398040,
    uGUIDifficultySelect = 0x1398478,
    uGUIEpisode = 0x1398738,
    uGUIEpisodeEnd = 0x1398880,
    uGUIEpisodeEndEx = 0x1398B08,
    uGUIEpisodeHint = 0x1398CE8,
    uGUIEpisodeLogo = 0x1398E48,
    uGUIEpisodeTitle = 0x1398FF0,
    uGUIEquip = 0x139AE78,
    uGUIEquipShortcut = 0x139B008,
    uGUIEquipShortcutRaid = 0x139B1F8,
    uGUIEventCutIn = 0x1397AA0,
    uGUIExMarking = 0x139FB88,
    uGUIFade = 0x1399138,
    uGUIFileList = 0x13998B8,
    uGUIFileText = 0x1399A00,
    uGUIFlash = 0x139B5B0,
    uGUIFood = 0x139B710,
    uGUIGesture = 0x139B860,
    uGUIGetItem = 0x139D460,
    uGUIGuide = 0x1399E68,
    uGUIHeadLineNews = 0x139A8F0,
    uGUIHeal = 0x139B9F0,
    uGUIHealNum = 0x139BB48,
    uGUIIndicatorFar = 0x139C718,
    uGUIIndicatorNear = 0x139C860,
    uGUIInventoryCampaign__cCompose = 0x139CD20,
    uGUIInventoryRaid = 0x139D2E8,
    uGUIKeyItem = 0x139D640,
    uGUILoading = 0x139D830,
    uGUILoadingKafka = 0x139D980,
    uGUILoadingShow = 0x139DC10,
    uGUIManual = 0x139DFE8,
    uGUIMap = 0x139E148,
    uGUIMapDetailBase = 0x139F2B0,
    uGUIMapIcon = 0x139F9A0,
    uGUIMessageBox = 0x1398278,
    uGUIMissionClear = 0x13A0540,
    uGUIMissionFailed = 0x13A06A0,
    uGUIMissionStart = 0x13A0970,
    uGUIMoneyGuide = 0x1399FC8,
    uGUIMouseCursor = 0x13BF3F0,
    uGUIOnlineStore = 0x139FF68,
    uGUIPurpose = 0x139BC88,
    uGUIPuzzle = 0x13A0298,
    uGUIRaidBreakIn = 0x13A0400,
    uGUIRaidBuyCutin = 0x13A0AB8,
    uGUIRaidCutIn = 0x13A0C28,
    uGUIRaidDeparture = 0x13A10C0,
    uGUIRaidEquip = 0x139B460,
    uGUIRaidFormationBase = 0x13A1788,
    uGUIRaidFormationChar = 0x13A1978,
    uGUIRaidFormationGesture = 0x13A1AE0,
    uGUIRaidFormationSkill = 0x13A1CB8,
    uGUIRaidFormationWeapon = 0x13A1E38,
    uGUIRaidGetItemPopup = 0x13A0D78,
    uGUIRaidManualList = 0x13A1F90,
    uGUIRaidReady = 0x13A14E0,
    uGUIRaidReadyNew = 0x13A1620,
    uGUIRaidSkillPopup = 0x13A0EF8,
    uGUIRaidStore = 0x13A2828,
    uGUIRaidTop = 0x13A2A30,
    uGUIRaidVoiceList = 0x13A2598,
    uGUIRanking = 0x13A26D0,
    uGUIRankingCampaign = 0x13E84E8,
    uGUIRankingOption = 0x13A2B60,
    uGUIRankingRaid = 0x13A2CD0,
    uGUIReady = 0x13A2E30,
    uGUIReBanner = 0x13975D8,
    uGUIResult = 0x13A2F78,
    uGUIResultCutin = 0x13A30C8,
    uGUIResultCutinRaid = 0x13A3220,
    uGUIResultRaid = 0x13A34B0,
    uGUIResultRaidEvent = 0x13A3618,
    uGUIReticleBase = 0x13A38C0,
    uGUIReticleNatalia = 0x13A3A68,
    uGUIReticleScope = 0x13A3BC8,
    uGUIReticleThrow = 0x13A3D00,
    uGUISaving = 0x139DD80,
    uGUISearch = 0x13BAB38,
    uGUISessionCreat = 0x13A20D8,
    uGUISessionList = 0x13A2278,
    uGUISessionSearch = 0x13A2430,
    uGUISkill = 0x13BB710,
    uGUISkillCoolDown = 0x139BDF0,
    uGUIStaffRoll = 0x13BB8B8,
    uGUIStoreInfomation = 0x13A0128,
    uGUITextVoice = 0x13BEF88,
    uGUIThanks = 0x13BE7F0,
    uGUIThumbnail = 0x13BE938,
    uGUITimer = 0x13BEA88,
    uGUITitleTop = 0x13BEBD8,
    uGUITutorial = 0x13BEE38,
    uGUIVitalityEnemy = 0x139C178,
    uGUIVitalityMe = 0x139C2E0,
    uGUIVitalityPartner = 0x139C430,
    uGUIVoiceChatName = 0x13BF6E0,
    uGUIWeakPoint = 0x13BF848,
    VirtualScreen = 0x141AC10
};

bool IsSplitScreenActive()
{
    auto ptr = *(uint32_t*)0x157AE00;
    return ptr && *(uint32_t*)(ptr + 0x8F4) == 1;
}

void __fastcall sub_96C410(int _this, int edx, int a2, int a3)
{
    int32_t v4 = 0, v5 = 0, v6 = 0, v7 = 0;
    auto dword_15DE88C = *(uint32_t*)0x15DE88C;

    if (*(uint8_t*)(_this + 144))
    {
        v4 = *(int32_t*)(dword_15DE88C + 3248);
        v5 = *(int32_t*)(dword_15DE88C + 3252);
        v6 = *(int32_t*)(dword_15DE88C + 3256);
        v7 = *(int32_t*)(dword_15DE88C + 3260);
    }
    else
    {
        auto v8 = 400 * *(uint32_t*)(_this + 140);
        v4 = *(int32_t*)(v8 + dword_15DE88C + 72);
        v5 = *(int32_t*)(v8 + dword_15DE88C + 76);
        v6 = *(int32_t*)(v8 + dword_15DE88C + 80);
        v7 = *(int32_t*)(v8 + dword_15DE88C + 84);
    }

    auto v9 = (float)(v7 - v5) * 0.0013888889f;
    auto v10 = (float)(v6 - v4) * 0.00078125001f;
    if (v10 <= v9)
        v9 = v10;

    if (IsSplitScreenActive())
        a2 += (1280 - 936) + 136;

    *(int32_t*)(_this + 164) = (int32_t)(((float)a2 * v9) + (float)v4);
    *(int32_t*)(_this + 168) = (int32_t)(((float)a3 * v9) + (float)v5);
}

void __fastcall sub_E18040_nop(int _this, int edx, int a2)
{
    return;
}

void __fastcall sub_E18040_splitscreen(int _this, int edx, int a2)
{
    char* v2; // esi
    float v4; // xmm5_4
    float v5; // xmm6_4
    float v6; // xmm7_4
    float v7; // xmm0_4
    int v8; // ecx
    uint32_t* v9; // eax
    int v10; // edi
    int v11; // ecx
    int v12; // ecx
    float* v13; // edx
    float v14; // xmm4_4
    float v15; // xmm3_4
    int v16; // eax
    int v17; // edi
    float v18; // xmm0_4
    int v19; // [esp+8h] [ebp-3Ch]
    float v20; // [esp+8h] [ebp-3Ch]
    int v21; // [esp+Ch] [ebp-38h]
    int v22; // [esp+10h] [ebp-34h]
    int v23; // [esp+14h] [ebp-30h]
    int v24; // [esp+18h] [ebp-2Ch]
    int v25; // [esp+18h] [ebp-2Ch]
    float v26; // [esp+1Ch] [ebp-28h]
    float v27; // [esp+28h] [ebp-1Ch]
    int v28; // [esp+2Ch] [ebp-18h]
    int v29; // [esp+30h] [ebp-14h]

    auto sub_D7A340 = (int(__fastcall*) (char*, int, int))0xD7A340;
    auto sub_D79650 = (float(__fastcall*) (char*, int))0xD79650;
    auto sub_D79630 = (float(__fastcall*) (char*, int))0xD79630;
    auto sub_E67E20 = (void(__fastcall*) (uint32_t*, int, int))0xE67E20;

    v2 = *(char**)(a2 + 4);
    v19 = *(uint32_t*)0x15DDFD8;
    v21 = *(uint32_t*)0x15DDFDC + *((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48);
    v29 = *(uint32_t*)0x15DDFDC;
    v24 = *(uint32_t*)0x15DDFDC;
    v28 = *(uint32_t*)0x15DDFD8 + *((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47);
    v4 = *(float*)(_this + 0x60) * *(float*)&*(uint32_t*)0x153C628;
    v5 = *(float*)(_this + 100) * *(float*)&*(uint32_t*)0x153C62C;
    v6 = *(float*)(_this + 64);
    v7 = *(float*)(_this + 68);
    v22 = *(uint32_t*)0x15DDFD8;
    v8 = v28;
    v23 = v21;
    v9 = *(uint32_t**)(_this + 240);
    v10 = 2;
    v26 = v4;
    v27 = v5;
    if (v9)
    {
        v8 = v9[30];
        v10 = (v9[28] >> 1) & 3;
        v23 = v9[31];
        v22 = 0;
        v24 = 0;
    }
    if ((*(uint32_t*)(_this + 328) & 4) != 0)
    {
        v4 = (float)((float)(*((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47)) / (float)(v8 - v22)) * v4;
        v26 = v4;
        v27 = (float)((float)(*((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48)) / (float)(v23 - v24)) * v5;
        v5 = v27;
    }
    *((uint32_t*)v2 + 19) |= 2u;
    if (v2[76] < 0)
    {
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] = *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] & 0x80000000 | 0x2C4;
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] &= ~0x80000000;
        v11 = 3 * *((uint32_t*)v2 + 23);
        *(uint32_t*)&v2[4 * v11 + 199888] = *((uint32_t*)v2 + 1542);
        *(uint32_t*)&v2[4 * v11 + 199892] = *((uint32_t*)v2 + 1543);
        ++*((uint32_t*)v2 + 23);
    }
    v12 = (4 * *(uint16_t*)(*(uint32_t*)(*((uint32_t*)v2 + 2) + 2832) + 24) + 15) & 0xFFFFFFF0;
    v25 = v12;
    if ((unsigned int)(v12 + *((uint32_t*)v2 + 5)) > *((uint32_t*)v2 + 6))
    {
        sub_D7A340(v2, edx, v12);
        v4 = v26;
        v5 = v27;
        v12 = v25;
    }
    v13 = (float*)*((uint32_t*)v2 + 5);
    *(char**)((uint32_t*)v2 + 5) = (char*)v13 + v12;
    *(float**)((uint32_t*)v2 + 1542) = v13;
    *((uint32_t*)v2 + 81) |= 1u;
    if (v13)
    {
        v14 = 2.0 / (float)(v28 - v19);
        v15 = -2.0 / (float)(v21 - v29);
        v13[0] = v14 * v4;
        v13[1] = v15 * v5;
        v13[2] = (float)(v14 * v6) - 1.0;
        v13[3] = (float)(v15 * v7) + 1.0;
        *((uint32_t*)v2 + 19) &= ~2u;

        auto ptr = *(uintptr_t*)0x15DF9CC;
        if (ptr)
        {
            RECT Rect;
            GetClientRect(*(HWND*)(ptr + 0x12C), &Rect);
            if (IsSplitScreenActive() && (v21 == (uint32_t)((Rect.right / (16.0f / 9.0f)) / 2.0f)))
            {
                v14 = 2.0 / (float)(v28 - v19);
                v15 = -2.0 / (float)(v21 - v29);
                v13[0] = v14 * v4;
                v13[1] = v15 * v5;
                v13[2] = (float)(v14 * v6) - fDiffInv;
                v13[3] = (float)(v15 * v7) + 1.0;
            }
        }
    }
    v16 = a2;
    *(float*)(a2 + 184) = v6;
    *(float*)(a2 + 188) = v7;
    *(float*)(a2 + 192) = v4;
    *(float*)(a2 + 196) = v5;
    v17 = v10 - 1;
    if (!v17)
    {
        v20 = sub_D79650(v2, edx);
    LABEL_18:
        v18 = v20;
        goto LABEL_19;
    }
    if (v17 != 1)
    {
        v18 = 0.0;
        goto LABEL_20;
    }
    v20 = sub_D79630(v2, edx);
    if ((uint8_t) * ((uint32_t*)v2 + 86) < 8u
        && !*(uint32_t*)(400 * (uint8_t) * ((uint32_t*)v2 + 86) + *(uint32_t*)0x15DE88C + 52))
    {
        goto LABEL_18;
    }
    v18 = v20 + 0.25;
LABEL_19:
    v16 = a2;
LABEL_20:
    *(float*)(v16 + 96) = v18;
    if ((*(uint8_t*)(_this + 328) & 1) != 0)
    {
        if (*(uint32_t*)(_this + 244))
        {
            *((uint32_t*)v2 + 85) = *((uint32_t*)v2 + 85) & 0x1F ^ (32
                * (*(uint32_t*)(_this + 332) + (*(uint32_t*)(_this + 336) << 20)));
            sub_E67E20(*(uint32_t**)(_this + 244), edx, a2);
        }
    }
}

void __fastcall sub_E18040_splitscreen_stretch(int _this, int edx, int a2)
{
    char* v2; // esi
    float v4; // xmm5_4
    float v5; // xmm6_4
    float v6; // xmm7_4
    float v7; // xmm0_4
    int v8; // ecx
    uint32_t* v9; // eax
    int v10; // edi
    int v11; // ecx
    int v12; // ecx
    float* v13; // edx
    float v14; // xmm4_4
    float v15; // xmm3_4
    int v16; // eax
    int v17; // edi
    float v18; // xmm0_4
    int v19; // [esp+8h] [ebp-3Ch]
    float v20; // [esp+8h] [ebp-3Ch]
    int v21; // [esp+Ch] [ebp-38h]
    int v22; // [esp+10h] [ebp-34h]
    int v23; // [esp+14h] [ebp-30h]
    int v24; // [esp+18h] [ebp-2Ch]
    int v25; // [esp+18h] [ebp-2Ch]
    float v26; // [esp+1Ch] [ebp-28h]
    float v27; // [esp+28h] [ebp-1Ch]
    int v28; // [esp+2Ch] [ebp-18h]
    int v29; // [esp+30h] [ebp-14h]

    auto sub_D7A340 = (int(__fastcall*) (char*, int, int))0xD7A340;
    auto sub_D79650 = (float(__fastcall*) (char*, int))0xD79650;
    auto sub_D79630 = (float(__fastcall*) (char*, int))0xD79630;
    auto sub_E67E20 = (void(__fastcall*) (uint32_t*, int, int))0xE67E20;

    v2 = *(char**)(a2 + 4);
    v19 = *(uint32_t*)0x15DDFD8;
    v21 = *(uint32_t*)0x15DDFDC + *((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48);
    v29 = *(uint32_t*)0x15DDFDC;
    v24 = *(uint32_t*)0x15DDFDC;
    v28 = *(uint32_t*)0x15DDFD8 + *((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47);
    v4 = *(float*)(_this + 0x60) * *(float*)&*(uint32_t*)0x153C628;
    v5 = *(float*)(_this + 100) * *(float*)&*(uint32_t*)0x153C62C;
    v6 = *(float*)(_this + 64);
    v7 = *(float*)(_this + 68);
    v22 = *(uint32_t*)0x15DDFD8;
    v8 = v28;
    v23 = v21;
    v9 = *(uint32_t**)(_this + 240);
    v10 = 2;
    v26 = v4;
    v27 = v5;
    if (v9)
    {
        v8 = v9[30];
        v10 = (v9[28] >> 1) & 3;
        v23 = v9[31];
        v22 = 0;
        v24 = 0;
    }
    if ((*(uint32_t*)(_this + 328) & 4) != 0)
    {
        v4 = (float)((float)(*((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47)) / (float)(v8 - v22)) * v4;
        v26 = v4;
        v27 = (float)((float)(*((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48)) / (float)(v23 - v24)) * v5;
        v5 = v27;
    }
    *((uint32_t*)v2 + 19) |= 2u;
    if (v2[76] < 0)
    {
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] = *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] & 0x80000000 | 0x2C4;
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] &= ~0x80000000;
        v11 = 3 * *((uint32_t*)v2 + 23);
        *(uint32_t*)&v2[4 * v11 + 199888] = *((uint32_t*)v2 + 1542);
        *(uint32_t*)&v2[4 * v11 + 199892] = *((uint32_t*)v2 + 1543);
        ++*((uint32_t*)v2 + 23);
    }
    v12 = (4 * *(uint16_t*)(*(uint32_t*)(*((uint32_t*)v2 + 2) + 2832) + 24) + 15) & 0xFFFFFFF0;
    v25 = v12;
    if ((unsigned int)(v12 + *((uint32_t*)v2 + 5)) > *((uint32_t*)v2 + 6))
    {
        sub_D7A340(v2, edx, v12);
        v4 = v26;
        v5 = v27;
        v12 = v25;
    }
    v13 = (float*)*((uint32_t*)v2 + 5);
    *(char**)((uint32_t*)v2 + 5) = (char*)v13 + v12;
    *(float**)((uint32_t*)v2 + 1542) = v13;
    *((uint32_t*)v2 + 81) |= 1u;
    if (v13)
    {
        v14 = 2.0 / (float)(v28 - v19);
        v15 = -2.0 / (float)(v21 - v29);
        v13[0] = v14 * v4;
        v13[1] = v15 * v5;
        v13[2] = (float)(v14 * v6) - 1.0;
        v13[3] = (float)(v15 * v7) + 1.0;
        *((uint32_t*)v2 + 19) &= ~2u;

        auto ptr = *(uintptr_t*)0x15DF9CC;
        if (ptr)
        {
            if (IsSplitScreenActive())
            {
                v14 = (2.0 * fDiff) / (float)(v28 - v19);
                v15 = -2.0 / (float)(v21 - v29);
                v13[0] = v14 * v4;
                v13[1] = v15 * v5;
                v13[2] = -1.0f; //(float)(v14 * v6) - fDiffInv;
                v13[3] = (float)(v15 * v7) + 1.0;
            }
        }
    }
    v16 = a2;
    *(float*)(a2 + 184) = v6;
    *(float*)(a2 + 188) = v7;
    *(float*)(a2 + 192) = v4;
    *(float*)(a2 + 196) = v5;
    v17 = v10 - 1;
    if (!v17)
    {
        v20 = sub_D79650(v2, edx);
    LABEL_18:
        v18 = v20;
        goto LABEL_19;
    }
    if (v17 != 1)
    {
        v18 = 0.0;
        goto LABEL_20;
    }
    v20 = sub_D79630(v2, edx);
    if ((uint8_t)*((uint32_t*)v2 + 86) < 8u
        && !*(uint32_t*)(400 * (uint8_t)*((uint32_t*)v2 + 86) + *(uint32_t*)0x15DE88C + 52))
    {
        goto LABEL_18;
    }
    v18 = v20 + 0.25;
LABEL_19:
    v16 = a2;
LABEL_20:
    *(float*)(v16 + 96) = v18;
    if ((*(uint8_t*)(_this + 328) & 1) != 0)
    {
        if (*(uint32_t*)(_this + 244))
        {
            *((uint32_t*)v2 + 85) = *((uint32_t*)v2 + 85) & 0x1F ^ (32
                * (*(uint32_t*)(_this + 332) + (*(uint32_t*)(_this + 336) << 20)));
            sub_E67E20(*(uint32_t**)(_this + 244), edx, a2);
        }
    }
}

void __fastcall sub_E18040_original(int _this, int edx, int a2)
{
    char* v2; // esi
    float v4; // xmm5_4
    float v5; // xmm6_4
    float v6; // xmm7_4
    float v7; // xmm0_4
    int v8; // ecx
    uint32_t* v9; // eax
    int v10; // edi
    int v11; // ecx
    int v12; // ecx
    float* v13; // edx
    float v14; // xmm4_4
    float v15; // xmm3_4
    int v16; // eax
    int v17; // edi
    float v18; // xmm0_4
    int v19; // [esp+8h] [ebp-3Ch]
    float v20; // [esp+8h] [ebp-3Ch]
    int v21; // [esp+Ch] [ebp-38h]
    int v22; // [esp+10h] [ebp-34h]
    int v23; // [esp+14h] [ebp-30h]
    int v24; // [esp+18h] [ebp-2Ch]
    int v25; // [esp+18h] [ebp-2Ch]
    float v26; // [esp+1Ch] [ebp-28h]
    float v27; // [esp+28h] [ebp-1Ch]
    int v28; // [esp+2Ch] [ebp-18h]
    int v29; // [esp+30h] [ebp-14h]

    auto sub_D7A340 = (int(__fastcall*) (char*, int, int))0xD7A340;
    auto sub_D79650 = (float(__fastcall*) (char*, int))0xD79650;
    auto sub_D79630 = (float(__fastcall*) (char*, int))0xD79630;
    auto sub_E67E20 = (void(__fastcall*) (uint32_t*, int, int))0xE67E20;

    v2 = *(char**)(a2 + 4);
    v19 = *(uint32_t*)0x15DDFD8;
    v21 = *(uint32_t*)0x15DDFDC + *((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48);
    v29 = *(uint32_t*)0x15DDFDC;
    v24 = *(uint32_t*)0x15DDFDC;
    v28 = *(uint32_t*)0x15DDFD8 + *((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47);
    v4 = *(float*)(_this + 0x60) * *(float*)&*(uint32_t*)0x153C628;
    v5 = *(float*)(_this + 100) * *(float*)&*(uint32_t*)0x153C62C;
    v6 = *(float*)(_this + 64);
    v7 = *(float*)(_this + 68);
    v22 = *(uint32_t*)0x15DDFD8;
    v8 = v28;
    v23 = v21;
    v9 = *(uint32_t**)(_this + 240);
    v10 = 2;
    v26 = v4;
    v27 = v5;
    if (v9)
    {
        v8 = v9[30];
        v10 = (v9[28] >> 1) & 3;
        v23 = v9[31];
        v22 = 0;
        v24 = 0;
    }
    if ((*(uint32_t*)(_this + 328) & 4) != 0)
    {
        v4 = (float)((float)(*((uint32_t*)v2 + 49) - *((uint32_t*)v2 + 47)) / (float)(v8 - v22)) * v4;
        v26 = v4;
        v27 = (float)((float)(*((uint32_t*)v2 + 50) - *((uint32_t*)v2 + 48)) / (float)(v23 - v24)) * v5;
        v5 = v27;
    }
    *((uint32_t*)v2 + 19) |= 2u;
    if (v2[76] < 0)
    {
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] = *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] & 0x80000000 | 0x2C4;
        *(uint32_t*)&v2[12 * *((uint32_t*)v2 + 23) + 199884] &= ~0x80000000;
        v11 = 3 * *((uint32_t*)v2 + 23);
        *(uint32_t*)&v2[4 * v11 + 199888] = *((uint32_t*)v2 + 1542);
        *(uint32_t*)&v2[4 * v11 + 199892] = *((uint32_t*)v2 + 1543);
        ++*((uint32_t*)v2 + 23);
    }
    v12 = (4 * *(uint16_t*)(*(uint32_t*)(*((uint32_t*)v2 + 2) + 2832) + 24) + 15) & 0xFFFFFFF0;
    v25 = v12;
    if ((unsigned int)(v12 + *((uint32_t*)v2 + 5)) > *((uint32_t*)v2 + 6))
    {
        sub_D7A340(v2, edx, v12);
        v4 = v26;
        v5 = v27;
        v12 = v25;
    }
    v13 = (float*)*((uint32_t*)v2 + 5);
    *(char**)((uint32_t*)v2 + 5) = (char*)v13 + v12;
    *(float**)((uint32_t*)v2 + 1542) = v13;
    *((uint32_t*)v2 + 81) |= 1u;
    if (v13)
    {
        v14 = 2.0 / (float)(v28 - v19);
        v15 = -2.0 / (float)(v21 - v29);
        v13[0] = v14 * v4;
        v13[1] = v15 * v5;
        v13[2] = (float)(v14 * v6) - 1.0;
        v13[3] = (float)(v15 * v7) + 1.0;
        *((uint32_t*)v2 + 19) &= ~2u;
    }
    v16 = a2;
    *(float*)(a2 + 184) = v6;
    *(float*)(a2 + 188) = v7;
    *(float*)(a2 + 192) = v4;
    *(float*)(a2 + 196) = v5;
    v17 = v10 - 1;
    if (!v17)
    {
        v20 = sub_D79650(v2, edx);
    LABEL_18:
        v18 = v20;
        goto LABEL_19;
    }
    if (v17 != 1)
    {
        v18 = 0.0;
        goto LABEL_20;
    }
    v20 = sub_D79630(v2, edx);
    if ((uint8_t) * ((uint32_t*)v2 + 86) < 8u
        && !*(uint32_t*)(400 * (uint8_t) * ((uint32_t*)v2 + 86) + *(uint32_t*)0x15DE88C + 52))
    {
        goto LABEL_18;
    }
    v18 = v20 + 0.25;
LABEL_19:
    v16 = a2;
LABEL_20:
    *(float*)(v16 + 96) = v18;
    if ((*(uint8_t*)(_this + 328) & 1) != 0)
    {
        if (*(uint32_t*)(_this + 244))
        {
            *((uint32_t*)v2 + 85) = *((uint32_t*)v2 + 85) & 0x1F ^ (32
                * (*(uint32_t*)(_this + 332) + (*(uint32_t*)(_this + 336) << 20)));
            sub_E67E20(*(uint32_t**)(_this + 244), edx, a2);
        }
    }
}

void Init()
{
    CIniReader iniReader("");
    auto bSkipIntro = iniReader.ReadInteger("MAIN", "SkipIntro", 1) != 0;
    auto bDisableDamageOverlay = iniReader.ReadInteger("MAIN", "DisableDamageOverlay", 1) != 0;
    auto bDisableFilmGrain = iniReader.ReadInteger("MAIN", "DisableFilmGrain", 1) != 0;
    auto bDisableFade = iniReader.ReadInteger("MAIN", "DisableFade", 0) != 0;
    auto bDisableGUICommandFar = iniReader.ReadInteger("MAIN", "DisableGUICommandFar", 0) != 0;
    
    if (bSkipIntro)
    {
        injector::WriteMemory<uint8_t>(0xA62A74, 0xEB, true);
        injector::WriteMemory<uint16_t>(0xA62A9D, 0x9090, true);
    }

    // split screen windows dimensions
    injector::WriteMemory(0x4AE6C8 + 4, 0, true);
    injector::WriteMemory(0x4AE6D0 + 4, 0, true);
    injector::WriteMemory(0x4AE6D8 + 4, 1280, true);
    injector::WriteMemory(0x4AE6E0 + 4, 360, true);

    injector::WriteMemory(0x4AE712 + 4, 0, true);
    injector::WriteMemory(0x4AE71A + 4, 360, true);
    injector::WriteMemory(0x4AE722 + 4, 1280, true);
    injector::WriteMemory(0x4AE72A + 4, 720, true);

    // GUI
    injector::MakeJMP(0xE18040, sub_E18040_splitscreen, true);
    injector::WriteMemory(uGUIFade, sub_E18040_splitscreen_stretch, true);

    injector::WriteMemory(uGUICommandBase, sub_E18040_original, true);
    injector::WriteMemory(uGUICommandFar, sub_E18040_splitscreen_stretch, true);
    injector::WriteMemory(uGUICommandNear, sub_E18040_original, true);

    if (bDisableDamageOverlay)
    {
        injector::WriteMemory(uGUIDamage, sub_E18040_nop, true);
        injector::WriteMemory(uGUIDamage2, sub_E18040_nop, true);
    }
    else
    {
        injector::WriteMemory(uGUIDamage, sub_E18040_splitscreen_stretch, true);
        injector::WriteMemory(uGUIDamage2, sub_E18040_splitscreen_stretch, true);
    }

    //3d items in the inventory
    injector::MakeCALL(0x8931DE, sub_96C410, true);
    injector::MakeCALL(0x8C1B3E, sub_96C410, true);
    injector::MakeCALL(0x8CEB99, sub_96C410, true);
    injector::MakeCALL(0x8F7A29, sub_96C410, true);
    injector::MakeCALL(0x8FA254, sub_96C410, true);
    injector::MakeCALL(0x8FA2E5, sub_96C410, true);
    injector::MakeCALL(0x93D63C, sub_96C410, true);

    //disable shader overlays (don't scale to fullscreen)
    {
        struct SetVertexShaderConstantFHook
        {
            void operator()(injector::reg_pack& regs)
            {
                if (IsSplitScreenActive())
                {
                    auto pConstantData = (float*)regs.eax;
                    if (pConstantData[0] == 0.000520833360f && pConstantData[1] == -0.00185185182f && pConstantData[2] == -0.000520833360f)
                        pConstantData[0] = 0.0f;
                }
                regs.eax = *(uint8_t*)(regs.edx + regs.ebx * 4 + 2);
            }
        }; injector::MakeInline<SetVertexShaderConstantFHook>(0xCCD567);
    }

    if (bDisableFilmGrain)
    {
        injector::WriteMemory<uint8_t>(0x0141664C, 'r', true);
        injector::WriteMemory<uint8_t>(0x01416668, 'r', true);
    }

    if (bDisableFade)
    {
        injector::WriteMemory(uGUIFade, sub_E18040_nop, true);
    }

    if (bDisableGUICommandFar)
    {
        injector::WriteMemory(uGUICommandFar, sub_E18040_nop, true);
    }
}

CEXP void InitializeASI()
{
    std::call_once(CallbackHandler::flag, []()
    {
        CallbackHandler::RegisterCallback(Init, hook::pattern("F3 0F 5C 15 ? ? ? ? F3 0F 59 E5"));
    });
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        if (!IsUALPresent()) { InitializeASI(); }
    }
    return TRUE;
}