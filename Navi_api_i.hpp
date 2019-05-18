#ifndef HMI_STATIC_I_H
#define HMI_STATIC_I_H
/***************************************************************************
*================ Copyright by Continental Automotive GmbH =================
****************************************************************************
*
* Titel        : API_Device_TBT_Api_i.h
*
* Description  : HMI API EXPORT HEADER
*
* Environment  : JGP 2014
*
* Responsible  : Cao Yiran
*
****************************************************************************/



/****************************************************************************
** Header Files (Only those that are needed in this file)
****************************************************************************/

#include "WRS_Enumerations.hpp"
#include "rsst__dbitmapid_d1h.h"
namespace NAVI
{
    typedef struct stSchematicsBmpID
    {
        uint8 u8DisplayType;
        RSST_tenBitmapID enDomRSSTID;
        RSST_tenBitmapID enOtherRSSTID;
        RSST_tenBitmapID enChnRSSTID;
    } tstSchematicsBmpID;
    typedef struct stPreInfoExceptTBTBmpID
    {
        uint8 u8DisplayType;
        uint8 u8TBT_Direction;
        RSST_tenBitmapID enDomRSSTID;
        RSST_tenBitmapID enOtherRSSTID;
        RSST_tenBitmapID enChnRSSTID;
    } tstPreInfoExceptTBTBmpID;
    typedef struct stDIS_SpdInfo_BmpID
    {
        uint8 u8DISIndex;
        RSST_tenBitmapID enDomRSSTID;
        RSST_tenBitmapID enChnRSSTID;
        RSST_tenBitmapID enUsaRSSTID;
        RSST_tenBitmapID enEECRSSTID;
        RSST_tenBitmapID enMIDRSSTID;
        RSST_tenBitmapID enAUSRSSTID;
        RSST_tenBitmapID enBrailRSSTID;
    } tstDIS_DISInfo_BmpID;
    enum RegionInfo
    {
        nRegKOR = 1,
        nRegGEN = 2,
        nRegMID = 3,
        nRegEUR = 4,
        nRegAUS = 5,
        nRegCAN = 6,
        nRegUSA = 7,
        nRegCHN = 8,
        nRegRUS = 9,
        nRegBRA = 10,
    };
    enum NaviDirectionInfo
    {
        NaviDirection16_1 = 0x00,
        NaviDirection16_2 = 0x01,
        NaviDirection16_3 = 0x02,
        NaviDirection16_4 = 0x03,
        NaviDirection16_5 = 0x04,
        NaviDirection16_6 = 0x05,
        NaviDirection16_7 = 0x06,
        NaviDirection16_8 = 0x07,
        NaviDirection16_9 = 0x08,
        NaviDirection16_10 = 0x09,
        NaviDirection16_11 = 0x0A,
        NaviDirection16_12 = 0x0B,
        NaviDirection16_13 = 0x0C,
        NaviDirection16_14 = 0x0D,
        NaviDirection16_15 = 0x0E,
        NaviDirection16_16 = 0x0F,
        NaviDirection_CenterRight_Right = 0x01,
        NaviDirection_CenterRight_Center = 0x00,
        NaviDirection_CenterLeft_Left = 0x01,
        NaviDirection_CenterLeft_Center = 0x00,
        NaviDirection_RightLeft_Left = 0x01,
        NaviDirection_RightLeft_Right = 0x00,
        NaviDirection_RightCenterLeft_Center = 0x00,
        NaviDirection_RightCenterLeft_Left = 0x02,
        NaviDirection_RightCenterLeft_Right = 0x01,
        NaviDirection_Left = 0x24,
        NaviDirection_Straight = 0x00,
    };
    const tstSchematicsBmpID astSchematicsID[] = {
        //  DispalyType         Domestic Schematics                  Other Schematics                        Chn Schematics
        { 0x41, RSST_nBMP__Nav_Pre_Info_41, RSST_nBMP__Nav_Pre_Info_41, RSST_nBMP__Nav_Pre_Info_41 },
        { 0x42, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42 },
        { 0x43, RSST_nBMP__Nav_Pre_Info_43, RSST_nBMP__Nav_Pre_Info_43, RSST_nBMP__Nav_Pre_Info_43 },
        { 0x44, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44 },
        { 0x45, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45 },
        { 0x46, RSST_nBMP__Nav_Pre_Info_46, RSST_nBMP__Nav_Pre_Info_46, RSST_nBMP__Nav_Pre_Info_46 },
        { 0x47, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47 },
        { 0x48, RSST_nBMP__Nav_Pre_Info_48, RSST_nBMP__Nav_Pre_Info_48, RSST_nBMP__Nav_Pre_Info_48 },
        { 0x49, RSST_nBMP__Nav_Pre_Info_49, RSST_nBMP__Nav_Pre_Info_49, RSST_nBMP__Nav_Pre_Info_49 },
        //{0x4A,        RSST_nBMP__Nav_Pre_Info_4A,        RSST_nBMP__Nav_Pre_Info_4A,        RSST_nBMP__Nav_Pre_Info_4A},
        //{0x4B,        RSST_nBMP__Nav_Pre_Info_4B,        RSST_nBMP__Nav_Pre_Info_4B,        RSST_nBMP__Nav_Pre_Info_4B},
        { 0x4C, RSST_nBMP__Nav_Pre_Info_4C, RSST_nBMP__Nav_Pre_Info_4C, RSST_nBMP__Nav_Pre_Info_4C },
        //{0x4D,        RSST_nBMP__Nav_Pre_Info_4D,        RSST_nBMP__Nav_Pre_Info_4D,        RSST_nBMP__Nav_Pre_Info_4D},
        //{0x4E,        RSST_nBMP__Nav_Pre_Info_4E,        RSST_nBMP__Nav_Pre_Info_4E,        RSST_nBMP__Nav_Pre_Info_4E},
        //{0x4F,        RSST_nBMP__Nav_Pre_Info_4F,        RSST_nBMP__Nav_Pre_Info_4F,        RSST_nBMP__Nav_Pre_Info_4F},
        //{0x50,        RSST_nBMP__Nav_Pre_Info_50,        RSST_nBMP__Nav_Pre_Info_50,        RSST_nBMP__Nav_Pre_Info_50},
        { 0x51, RSST_nBMP__Nav_Pre_Info_51, RSST_nBMP__Nav_Pre_Info_51, RSST_nBMP__Nav_Pre_Info_51 },
        { 0x52, RSST_nBMP__Nav_Pre_Info_52, RSST_nBMP__Nav_Pre_Info_52, RSST_nBMP__Nav_Pre_Info_52 },
        //{0x53,        RSST_nBMP__Nav_Pre_Info_53,        RSST_nBMP__Nav_Pre_Info_53,        RSST_nBMP__Nav_Pre_Info_53},
        { 0x54, RSST_nBMP__Nav_Pre_Info_54, RSST_nBMP__Nav_Pre_Info_54, RSST_nBMP__Nav_Pre_Info_54 },
        { 0x55, RSST_nBMP__Nav_Pre_Info_55, RSST_nBMP__Nav_Pre_Info_55, RSST_nBMP__Nav_Pre_Info_55 },
        { 0x56, RSST_nBMP__Nav_Pre_Info_56, RSST_nBMP__Nav_Pre_Info_56, RSST_nBMP__Nav_Pre_Info_56 },
        { 0x57, RSST_nBMP__Nav_Pre_Info_57, RSST_nBMP__Nav_Pre_Info_57, RSST_nBMP__Nav_Pre_Info_57 },
        { 0x58, RSST_nBMP__Nav_Pre_Info_58, RSST_nBMP__Nav_Pre_Info_58, RSST_nBMP__Nav_Pre_Info_58 },
        //{0x59,        RSST_nBMP__Nav_Pre_Info_59,        RSST_nBMP__Nav_Pre_Info_59,        RSST_nBMP__Nav_Pre_Info_59},
        { 0x5A, RSST_nBMP__Nav_Pre_Info_5A, RSST_nBMP__Nav_Pre_Info_5A, RSST_nBMP__Nav_Pre_Info_5A },
        { 0x5B, RSST_nBMP__Nav_Pre_Info_5B, RSST_nBMP__Nav_Pre_Info_5B, RSST_nBMP__Nav_Pre_Info_5B },
        //{0x5C,        RSST_nBMP__Nav_Pre_Info_5C,        RSST_nBMP__Nav_Pre_Info_5C,        RSST_nBMP__Nav_Pre_Info_5C},
        //{0x5D,        RSST_nBMP__Nav_Pre_Info_5D,        RSST_nBMP__Nav_Pre_Info_5D,        RSST_nBMP__Nav_Pre_Info_5D},
        //{0x5E,        RSST_nBMP__Nav_Pre_Info_5E,        RSST_nBMP__Nav_Pre_Info_5E,        RSST_nBMP__Nav_Pre_Info_5E},
        //{0x5F,        RSST_nBMP__Nav_Pre_Info_5F,        RSST_nBMP__Nav_Pre_Info_5F,        RSST_nBMP__Nav_Pre_Info_5F},
        { 0x60, RSST_nBMP__Nav_Pre_Info_60, RSST_nBMP__Nav_Pre_Info_60, RSST_nBMP__Nav_Pre_Info_60 },
        { 0x61, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61 },
        //{0x62,        RSST_nBMP__Nav_Pre_Info_62,        RSST_nBMP__Nav_Pre_Info_62,        RSST_nBMP__Nav_Pre_Info_62},
        { 0x63, RSST_nBMP__Nav_Pre_Info_63, RSST_nBMP__Nav_Pre_Info_63, RSST_nBMP__Nav_Pre_Info_63 },
        { 0x64, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64 },
        //{0x65,        RSST_nBMP__Nav_Pre_Info_65,        RSST_nBMP__Nav_Pre_Info_65,        RSST_nBMP__Nav_Pre_Info_65},
        { 0x66, RSST_nBMP__Nav_Pre_Info_66, RSST_nBMP__Nav_Pre_Info_66, RSST_nBMP__Nav_Pre_Info_66 },
        //{0x67,        RSST_nBMP__Nav_Pre_Info_67,        RSST_nBMP__Nav_Pre_Info_67,        RSST_nBMP__Nav_Pre_Info_67},
        { 0x68, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68 },
        { 0x69, RSST_nBMP__Nav_Pre_Info_69, RSST_nBMP__Nav_Pre_Info_69, RSST_nBMP__Nav_Pre_Info_69 },
        //{0x6A,        RSST_nBMP__Nav_Pre_Info_6A,        RSST_nBMP__Nav_Pre_Info_6A,        RSST_nBMP__Nav_Pre_Info_6A},
        { 0x6B, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B },
        //{0x6C,        RSST_nBMP__Nav_Pre_Info_6C,        RSST_nBMP__Nav_Pre_Info_6C,        RSST_nBMP__Nav_Pre_Info_6C},
        //{0x6D,        RSST_nBMP__Nav_Pre_Info_6D,        RSST_nBMP__Nav_Pre_Info_6D,        RSST_nBMP__Nav_Pre_Info_6D},
        //{0x6E,        RSST_nBMP__Nav_Pre_Info_6E,        RSST_nBMP__Nav_Pre_Info_6E,        RSST_nBMP__Nav_Pre_Info_6E},
        //{0x6F,        RSST_nBMP__Nav_Pre_Info_6F,        RSST_nBMP__Nav_Pre_Info_6F,        RSST_nBMP__Nav_Pre_Info_6F},
        { 0x70, RSST_nBMP__Nav_Pre_Info_70, RSST_nBMP__Nav_Pre_Info_70, RSST_nBMP__Nav_Pre_Info_70 },
        { 0x71, RSST_nBMP__Nav_Pre_Info_71, RSST_nBMP__Nav_Pre_Info_71, RSST_nBMP__Nav_Pre_Info_71 },
        { 0x72, RSST_nBMP__Nav_Pre_Info_72, RSST_nBMP__Nav_Pre_Info_72, RSST_nBMP__Nav_Pre_Info_72 },
        { 0x73, RSST_nBMP__Nav_Pre_Info_73, RSST_nBMP__Nav_Pre_Info_73, RSST_nBMP__Nav_Pre_Info_73 },
        { 0x74, RSST_nBMP__Nav_Pre_Info_74, RSST_nBMP__Nav_Pre_Info_74, RSST_nBMP__Nav_Pre_Info_74 },
        { 0x75, RSST_nBMP__Nav_Pre_Info_75, RSST_nBMP__Nav_Pre_Info_75, RSST_nBMP__Nav_Pre_Info_75 },
        { 0x76, RSST_nBMP__Nav_Pre_Info_76, RSST_nBMP__Nav_Pre_Info_76, RSST_nBMP__Nav_Pre_Info_76 },
        { 0x77, RSST_nBMP__Nav_Pre_Info_77, RSST_nBMP__Nav_Pre_Info_77, RSST_nBMP__Nav_Pre_Info_77 },
        { 0x78, RSST_nBMP__Nav_Pre_Info_78, RSST_nBMP__Nav_Pre_Info_78, RSST_nBMP__Nav_Pre_Info_78 },
        { 0x79, RSST_nBMP__Nav_Pre_Info_79, RSST_nBMP__Nav_Pre_Info_79, RSST_nBMP__Nav_Pre_Info_79 },
        { 0x7A, RSST_nBMP__Nav_Pre_Info_7A, RSST_nBMP__Nav_Pre_Info_7A, RSST_nBMP__Nav_Pre_Info_7A },
        { 0x7B, RSST_nBMP__Nav_Pre_Info_7B, RSST_nBMP__Nav_Pre_Info_7B, RSST_nBMP__Nav_Pre_Info_7B },
        { 0x7C, RSST_nBMP__Nav_Pre_Info_7C, RSST_nBMP__Nav_Pre_Info_7C, RSST_nBMP__Nav_Pre_Info_7C },
        { 0x7D, RSST_nBMP__Nav_Pre_Info_7D, RSST_nBMP__Nav_Pre_Info_7D, RSST_nBMP__Nav_Pre_Info_7D },
        { 0x7E, RSST_nBMP__Nav_Pre_Info_7E, RSST_nBMP__Nav_Pre_Info_7E, RSST_nBMP__Nav_Pre_Info_7E },
        //{0x7F,        RSST_nBMP__Nav_Pre_Info_7F,        RSST_nBMP__Nav_Pre_Info_7F,        RSST_nBMP__Nav_Pre_Info_7F},
        //{0x80,        RSST_nBMP__Nav_Pre_Info_80,        RSST_nBMP__Nav_Pre_Info_80,        RSST_nBMP__Nav_Pre_Info_80},
        //{0x81,        RSST_nBMP__Nav_Pre_Info_81,        RSST_nBMP__Nav_Pre_Info_81,        RSST_nBMP__Nav_Pre_Info_81},
        //{0x82,        RSST_nBMP__Nav_Pre_Info_82,        RSST_nBMP__Nav_Pre_Info_82,        RSST_nBMP__Nav_Pre_Info_82},
        //{0x83,        RSST_nBMP__Nav_Pre_Info_83,        RSST_nBMP__Nav_Pre_Info_83,        RSST_nBMP__Nav_Pre_Info_83},
        //{0x84,        RSST_nBMP__Nav_Pre_Info_84,        RSST_nBMP__Nav_Pre_Info_84,        RSST_nBMP__Nav_Pre_Info_84},
        //{0x85,        RSST_nBMP__Nav_Pre_Info_85,        RSST_nBMP__Nav_Pre_Info_85,        RSST_nBMP__Nav_Pre_Info_85},
        //{0x86,        RSST_nBMP__Nav_Pre_Info_86,        RSST_nBMP__Nav_Pre_Info_86,        RSST_nBMP__Nav_Pre_Info_86},
        //{0x87,        RSST_nBMP__Nav_Pre_Info_87,        RSST_nBMP__Nav_Pre_Info_87,        RSST_nBMP__Nav_Pre_Info_87},
        //{0x88,        RSST_nBMP__Nav_Pre_Info_88,        RSST_nBMP__Nav_Pre_Info_88,        RSST_nBMP__Nav_Pre_Info_88},
        { 0x89, RSST_nBMP__Nav_Pre_Info_89, RSST_nBMP__Nav_Pre_Info_89, RSST_nBMP__Nav_Pre_Info_89 },
        { 0x8A, RSST_nBMP__Nav_Pre_Info_8A, RSST_nBMP__Nav_Pre_Info_8A, RSST_nBMP__Nav_Pre_Info_8A },
        //{0x8B,        RSST_nBMP__Nav_Pre_Info_8B,        RSST_nBMP__Nav_Pre_Info_8B,        RSST_nBMP__Nav_Pre_Info_8B},
        //{0x8C,        RSST_nBMP__Nav_Pre_Info_8C,        RSST_nBMP__Nav_Pre_Info_8C,        RSST_nBMP__Nav_Pre_Info_8C},
        // {0x8D,        RSST_nBMP__Nav_Pre_Info_8D,        RSST_nBMP__Nav_Pre_Info_8D,        RSST_nBMP__Nav_Pre_Info_8D},
        //{0x8E,        RSST_nBMP__Nav_Pre_Info_8E,        RSST_nBMP__Nav_Pre_Info_8E,        RSST_nBMP__Nav_Pre_Info_8E},
        //{0x8F,        RSST_nBMP__Nav_Pre_Info_8F,        RSST_nBMP__Nav_Pre_Info_8F,        RSST_nBMP__Nav_Pre_Info_8F},
        { 0x90, RSST_nBMP__Nav_Pre_Info_90, RSST_nBMP__Nav_Pre_Info_90, RSST_nBMP__Nav_Pre_Info_90 },
        { 0x91, RSST_nBMP__Nav_Pre_Info_91, RSST_nBMP__Nav_Pre_Info_91, RSST_nBMP__Nav_Pre_Info_91 },
        { 0x92, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92 },
        { 0x93, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93 },
        { 0x94, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94 },
        { 0x95, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95 },
        //{0x96,        RSST_nBMP__Nav_Pre_Info_96,        RSST_nBMP__Nav_Pre_Info_96,        RSST_nBMP__Nav_Pre_Info_96},
        //{0x97,        RSST_nBMP__Nav_Pre_Info_97,        RSST_nBMP__Nav_Pre_Info_97,        RSST_nBMP__Nav_Pre_Info_97},
        //{0x98,        RSST_nBMP__Nav_Pre_Info_98,        RSST_nBMP__Nav_Pre_Info_98,        RSST_nBMP__Nav_Pre_Info_98},
        //{0x99,        RSST_nBMP__Nav_Pre_Info_99,        RSST_nBMP__Nav_Pre_Info_99,        RSST_nBMP__Nav_Pre_Info_99},
        //{0x9A,        RSST_nBMP__Nav_Pre_Info_9A,        RSST_nBMP__Nav_Pre_Info_9A,        RSST_nBMP__Nav_Pre_Info_9A},
        //{0x9B,        RSST_nBMP__Nav_Pre_Info_9B,        RSST_nBMP__Nav_Pre_Info_9B,        RSST_nBMP__Nav_Pre_Info_9B},
        //{0x9C,        RSST_nBMP__Nav_Pre_Info_9C,        RSST_nBMP__Nav_Pre_Info_9C,        RSST_nBMP__Nav_Pre_Info_9C},
        //{0x9D,        RSST_nBMP__Nav_Pre_Info_9D,        RSST_nBMP__Nav_Pre_Info_9D,        RSST_nBMP__Nav_Pre_Info_9D},
        //{0x9E,        RSST_nBMP__Nav_Pre_Info_9E,        RSST_nBMP__Nav_Pre_Info_9E,        RSST_nBMP__Nav_Pre_Info_9E},
        //{0x9F,        RSST_nBMP__Nav_Pre_Info_9F,        RSST_nBMP__Nav_Pre_Info_9F,        RSST_nBMP__Nav_Pre_Info_9F},
        { 0xA0, RSST_nBMP__Nav_Pre_Info_A0, RSST_nInvalidBitmap, RSST_nBMP__Nav_Pre_Info_A0_Chn },
        { 0xA1, RSST_nBMP__Nav_Pre_Info_A1, RSST_nInvalidBitmap, RSST_nBMP__Nav_Pre_Info_A1_Chn },
        { 0xA2, RSST_nBMP__Nav_Pre_Info_A2, RSST_nInvalidBitmap, RSST_nBMP__Nav_Pre_Info_A2_Chn },
        { 0xA3, RSST_nBMP__Nav_Pre_Info_A3, RSST_nBMP__Nav_Pre_Info_A3_USA, RSST_nBMP__Nav_Pre_Info_A3_Chn },
        { 0xA4, RSST_nBMP__Nav_Pre_Info_A4, RSST_nBMP__Nav_Pre_Info_A4_USA, RSST_nBMP__Nav_Pre_Info_A4_Chn },
        { 0xA5, RSST_nBMP__Nav_Pre_Info_A5, RSST_nBMP__Nav_Pre_Info_A5_USA, RSST_nBMP__Nav_Pre_Info_A5_Chn },
        //{0xA6,        RSST_nBMP__Nav_Pre_Info_A6,        RSST_nBMP__Nav_Pre_Info_A6,        RSST_nBMP__Nav_Pre_Info_A6},
        //{0xA7,        RSST_nBMP__Nav_Pre_Info_A7,        RSST_nBMP__Nav_Pre_Info_A7,        RSST_nBMP__Nav_Pre_Info_A7},
        //{0xA8,        RSST_nBMP__Nav_Pre_Info_A8,        RSST_nBMP__Nav_Pre_Info_A8,        RSST_nBMP__Nav_Pre_Info_A8},
        //{0xA9,        RSST_nBMP__Nav_Pre_Info_A9,        RSST_nBMP__Nav_Pre_Info_A9,        RSST_nBMP__Nav_Pre_Info_A9},
        //{0xAA,        RSST_nBMP__Nav_Pre_Info_AA,        RSST_nBMP__Nav_Pre_Info_AA,        RSST_nBMP__Nav_Pre_Info_AA},
        //{0xAB,        RSST_nBMP__Nav_Pre_Info_AB,        RSST_nBMP__Nav_Pre_Info_AB,        RSST_nBMP__Nav_Pre_Info_AB},
        { 0xAC, RSST_nBMP__Nav_Pre_Info_AC, RSST_nBMP__Nav_Pre_Info_AC, RSST_nBMP__Nav_Pre_Info_AC },
        { 0xAD, RSST_nBMP__Nav_Pre_Info_AD, RSST_nBMP__Nav_Pre_Info_AD, RSST_nBMP__Nav_Pre_Info_AD },
        { 0xAE, RSST_nBMP__Nav_Pre_Info_AE, RSST_nBMP__Nav_Pre_Info_AE, RSST_nBMP__Nav_Pre_Info_AE },
        //{0xAF,        RSST_nBMP__Nav_Pre_Info_AF,        RSST_nBMP__Nav_Pre_Info_AF,        RSST_nBMP__Nav_Pre_Info_AF},
        { 0xB0, RSST_nBMP__Nav_Pre_Info_B0, RSST_nBMP__Nav_Pre_Info_B0, RSST_nBMP__Nav_Pre_Info_B0 },
        { 0xB1, RSST_nBMP__Nav_Pre_Info_B1, RSST_nBMP__Nav_Pre_Info_B1, RSST_nBMP__Nav_Pre_Info_B1 },
        { 0xB2, RSST_nBMP__Nav_Pre_Info_B2, RSST_nBMP__Nav_Pre_Info_B2_USA, RSST_nBMP__Nav_Pre_Info_B2_Chn },
        //{0xB3,        RSST_nBMP__Nav_Pre_Info_B3,        RSST_nBMP__Nav_Pre_Info_B3,        RSST_nBMP__Nav_Pre_Info_B3},
        //{0xB4,        RSST_nBMP__Nav_Pre_Info_B4,        RSST_nBMP__Nav_Pre_Info_B4,        RSST_nBMP__Nav_Pre_Info_B4},
        //{0xB5,        RSST_nBMP__Nav_Pre_Info_B5,        RSST_nBMP__Nav_Pre_Info_B5_USA,    RSST_nBMP__Nav_Pre_Info_B5_Chn},
        //{0xB6,        RSST_nBMP__Nav_Pre_Info_B6,        RSST_nBMP__Nav_Pre_Info_B6,        RSST_nBMP__Nav_Pre_Info_B6},
        { 0xB7, RSST_nBMP__Nav_Pre_Info_B7, RSST_nInvalidBitmap, RSST_nBMP__Nav_Pre_Info_B7_Chn },
        { 0xB8, RSST_nBMP__Nav_Pre_Info_B8, RSST_nBMP__Nav_Pre_Info_B8, RSST_nBMP__Nav_Pre_Info_B8 },
        //{0xB9,        RSST_nBMP__Nav_Pre_Info_B9,        RSST_nBMP__Nav_Pre_Info_B9,        RSST_nBMP__Nav_Pre_Info_B9},
        //{0xBA,        RSST_nBMP__Nav_Pre_Info_BA,        RSST_nBMP__Nav_Pre_Info_BA,        RSST_nBMP__Nav_Pre_Info_BA},
        //{0xBB,        RSST_nBMP__Nav_Pre_Info_BB,        RSST_nBMP__Nav_Pre_Info_BB,        RSST_nBMP__Nav_Pre_Info_BB},
        //{0xBC,        RSST_nBMP__Nav_Pre_Info_BC,        RSST_nBMP__Nav_Pre_Info_BC,        RSST_nBMP__Nav_Pre_Info_BC},
        //{0xBD,        RSST_nBMP__Nav_Pre_Info_BD,        RSST_nBMP__Nav_Pre_Info_BD,        RSST_nBMP__Nav_Pre_Info_BD},
        //{0xBE,        RSST_nBMP__Nav_Pre_Info_BE,        RSST_nBMP__Nav_Pre_Info_BE,        RSST_nBMP__Nav_Pre_Info_BE},
        //{0xBF,        RSST_nBMP__Nav_Pre_Info_BF,        RSST_nBMP__Nav_Pre_Info_BF,        RSST_nBMP__Nav_Pre_Info_BF},
        { 0xC0, RSST_nBMP__Nav_Pre_Info_C0, RSST_nBMP__Nav_Pre_Info_C0, RSST_nBMP__Nav_Pre_Info_C0 },
        { 0xC1, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1 },
        //{0xC2,        RSST_nBMP__Nav_Pre_Info_C2,        RSST_nBMP__Nav_Pre_Info_C2,        RSST_nBMP__Nav_Pre_Info_C2},
        { 0xC3, RSST_nBMP__Nav_Pre_Info_C3, RSST_nBMP__Nav_Pre_Info_C3, RSST_nBMP__Nav_Pre_Info_C3 },
        { 0xC4, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4 },
        //{0xC5,        RSST_nBMP__Nav_Pre_Info_C5,        RSST_nBMP__Nav_Pre_Info_C5,        RSST_nBMP__Nav_Pre_Info_C5},
        { 0xC6, RSST_nBMP__Nav_Pre_Info_C6, RSST_nBMP__Nav_Pre_Info_C6, RSST_nBMP__Nav_Pre_Info_C6 },
        //{0xC7,        RSST_nBMP__Nav_Pre_Info_C7,        RSST_nBMP__Nav_Pre_Info_C7,        RSST_nBMP__Nav_Pre_Info_C7},
        { 0xC8, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8 },
        { 0xC9, RSST_nBMP__Nav_Pre_Info_C9, RSST_nBMP__Nav_Pre_Info_C9, RSST_nBMP__Nav_Pre_Info_C9 },
        //{0xCA,        RSST_nBMP__Nav_Pre_Info_CA,        RSST_nBMP__Nav_Pre_Info_CA,        RSST_nBMP__Nav_Pre_Info_CA},
        { 0xCB, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB }
        //{0xCC,        RSST_nBMP__Nav_Pre_Info_CC,        RSST_nBMP__Nav_Pre_Info_CC,        RSST_nBMP__Nav_Pre_Info_CC},
        //{0xCD,        RSST_nBMP__Nav_Pre_Info_CD,        RSST_nBMP__Nav_Pre_Info_CD,        RSST_nBMP__Nav_Pre_Info_CD},
        //{0xCE,        RSST_nBMP__Nav_Pre_Info_CE,        RSST_nBMP__Nav_Pre_Info_CE,        RSST_nBMP__Nav_Pre_Info_CE},
        //{0xCF,        RSST_nBMP__Nav_Pre_Info_CF,        RSST_nBMP__Nav_Pre_Info_CF,        RSST_nBMP__Nav_Pre_Info_CF},
    };
    const tstPreInfoExceptTBTBmpID astPreInfoExceptTBTBmpID[] = {
        { 0x0D, NaviDirection16_1, RSST_nBMP__Nav_Pre_Info_41, RSST_nBMP__Nav_Pre_Info_41, RSST_nBMP__Nav_Pre_Info_41 },
        { 0x0D, NaviDirection16_2, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42 },
        { 0x0D, NaviDirection16_3, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42 },
        { 0x0D, NaviDirection16_4, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42, RSST_nBMP__Nav_Pre_Info_42 },
        { 0x0D, NaviDirection16_5, RSST_nBMP__Nav_Pre_Info_43, RSST_nBMP__Nav_Pre_Info_43, RSST_nBMP__Nav_Pre_Info_43 },
        { 0x0D, NaviDirection16_6, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44 },
        { 0x0D, NaviDirection16_7, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44 },
        { 0x0D, NaviDirection16_9, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44, RSST_nBMP__Nav_Pre_Info_44 },
        { 0x0D, NaviDirection16_10, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45 },
        { 0x0D, NaviDirection16_11, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45 },
        { 0x0D, NaviDirection16_12, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45, RSST_nBMP__Nav_Pre_Info_45 },
        { 0x0D, NaviDirection16_13, RSST_nBMP__Nav_Pre_Info_46, RSST_nBMP__Nav_Pre_Info_46, RSST_nBMP__Nav_Pre_Info_46 },
        { 0x0D, NaviDirection16_14, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47 },
        { 0x0D, NaviDirection16_15, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47 },
        { 0x0D, NaviDirection16_16, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47, RSST_nBMP__Nav_Pre_Info_47 },
        { 0x11, NaviDirection_CenterRight_Center, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92 },
        { 0x11, NaviDirection_CenterRight_Right, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93 },
        { 0x12, NaviDirection_CenterLeft_Center, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94 },
        { 0x12, NaviDirection_CenterLeft_Left, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95 },
        { 0x13, NaviDirection_CenterRight_Center, RSST_nBMP__Nav_Pre_Info_193, RSST_nBMP__Nav_Pre_Info_193, RSST_nBMP__Nav_Pre_Info_193 },
        { 0x13, NaviDirection_CenterRight_Right, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93 },
        { 0x14, NaviDirection_CenterLeft_Center, RSST_nBMP__Nav_Pre_Info_195, RSST_nBMP__Nav_Pre_Info_195, RSST_nBMP__Nav_Pre_Info_195 },
        { 0x14, NaviDirection_CenterLeft_Left, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95 },
        { 0x17, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93, RSST_nBMP__Nav_Pre_Info_93 },
        { 0x17, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92, RSST_nBMP__Nav_Pre_Info_92 },
        { 0x18, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94, RSST_nBMP__Nav_Pre_Info_94 },
        { 0x18, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95, RSST_nBMP__Nav_Pre_Info_95 },
        { 0x19, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_90, RSST_nBMP__Nav_Pre_Info_90, RSST_nBMP__Nav_Pre_Info_90 },
        { 0x19, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_91, RSST_nBMP__Nav_Pre_Info_91, RSST_nBMP__Nav_Pre_Info_91 },
        { 0x1F, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_49, RSST_nBMP__Nav_Pre_Info_49, RSST_nBMP__Nav_Pre_Info_49 },
        { 0x1F, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_48, RSST_nBMP__Nav_Pre_Info_48, RSST_nBMP__Nav_Pre_Info_48 },
        { 0x20, NaviDirection16_1, RSST_nBMP__Nav_Pre_Info_60, RSST_nBMP__Nav_Pre_Info_60, RSST_nBMP__Nav_Pre_Info_60 },
        { 0x20, NaviDirection16_2, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61 },
        { 0x20, NaviDirection16_3, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61 },
        { 0x20, NaviDirection16_4, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61, RSST_nBMP__Nav_Pre_Info_61 },
        { 0x20, NaviDirection16_5, RSST_nBMP__Nav_Pre_Info_63, RSST_nBMP__Nav_Pre_Info_63, RSST_nBMP__Nav_Pre_Info_63 },
        { 0x20, NaviDirection16_6, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64 },
        { 0x20, NaviDirection16_7, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64 },
        { 0x20, NaviDirection16_8, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64, RSST_nBMP__Nav_Pre_Info_64 },
        { 0x20, NaviDirection16_9, RSST_nBMP__Nav_Pre_Info_66, RSST_nBMP__Nav_Pre_Info_66, RSST_nBMP__Nav_Pre_Info_66 },
        { 0x20, NaviDirection16_10, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68 },
        { 0x20, NaviDirection16_11, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68 },
        { 0x20, NaviDirection16_12, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68, RSST_nBMP__Nav_Pre_Info_68 },
        { 0x20, NaviDirection16_13, RSST_nBMP__Nav_Pre_Info_69, RSST_nBMP__Nav_Pre_Info_69, RSST_nBMP__Nav_Pre_Info_69 },
        { 0x20, NaviDirection16_14, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B },
        { 0x20, NaviDirection16_15, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B },
        { 0x20, NaviDirection16_16, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B, RSST_nBMP__Nav_Pre_Info_6B },
        { 0x21, NaviDirection16_1, RSST_nBMP__Nav_Pre_Info_C0, RSST_nBMP__Nav_Pre_Info_C0, RSST_nBMP__Nav_Pre_Info_C0 },
        { 0x21, NaviDirection16_2, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1 },
        { 0x21, NaviDirection16_3, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1 },
        { 0x21, NaviDirection16_4, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1, RSST_nBMP__Nav_Pre_Info_C1 },
        { 0x21, NaviDirection16_5, RSST_nBMP__Nav_Pre_Info_C3, RSST_nBMP__Nav_Pre_Info_C3, RSST_nBMP__Nav_Pre_Info_C3 },
        { 0x21, NaviDirection16_6, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4 },
        { 0x21, NaviDirection16_7, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4 },
        { 0x21, NaviDirection16_8, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4, RSST_nBMP__Nav_Pre_Info_C4 },
        { 0x21, NaviDirection16_9, RSST_nBMP__Nav_Pre_Info_C6, RSST_nBMP__Nav_Pre_Info_C6, RSST_nBMP__Nav_Pre_Info_C6 },
        { 0x21, NaviDirection16_10, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8 },
        { 0x21, NaviDirection16_11, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8 },
        { 0x21, NaviDirection16_12, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8, RSST_nBMP__Nav_Pre_Info_C8 },
        { 0x21, NaviDirection16_13, RSST_nBMP__Nav_Pre_Info_C9, RSST_nBMP__Nav_Pre_Info_C9, RSST_nBMP__Nav_Pre_Info_C9 },
        { 0x21, NaviDirection16_14, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB },
        { 0x21, NaviDirection16_15, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB },
        { 0x21, NaviDirection16_16, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB, RSST_nBMP__Nav_Pre_Info_CB },
        { 0x2B, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_57, RSST_nBMP__Nav_Pre_Info_57, RSST_nBMP__Nav_Pre_Info_57 },
        { 0x2B, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_52, RSST_nBMP__Nav_Pre_Info_52, RSST_nBMP__Nav_Pre_Info_52 },
        { 0x2C, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_51, RSST_nBMP__Nav_Pre_Info_51, RSST_nBMP__Nav_Pre_Info_51 },
        { 0x2C, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_58, RSST_nBMP__Nav_Pre_Info_58, RSST_nBMP__Nav_Pre_Info_58 },
        { 0x2D, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_5A, RSST_nBMP__Nav_Pre_Info_5A, RSST_nBMP__Nav_Pre_Info_5A },
        { 0x2D, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_55, RSST_nBMP__Nav_Pre_Info_55, RSST_nBMP__Nav_Pre_Info_55 },
        { 0x2E, NaviDirection_RightLeft_Right, RSST_nBMP__Nav_Pre_Info_54, RSST_nBMP__Nav_Pre_Info_54, RSST_nBMP__Nav_Pre_Info_54 },
        { 0x2E, NaviDirection_RightLeft_Left, RSST_nBMP__Nav_Pre_Info_5B, RSST_nBMP__Nav_Pre_Info_5B, RSST_nBMP__Nav_Pre_Info_5B },
    };
}

/* --- EOF --- */
#endif // HMI_STATIC_I_H