// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 KEYBGEKO_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// KEYBGEKO_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef KEYBGEKO_EXPORTS
#define KEYBGEKO_API __declspec(dllexport)
#else
#define KEYBGEKO_API __declspec(dllimport)
#endif

// 此类是从 KeyBGeko.dll 导出的
class KEYBGEKO_API CKeyBGeko {
public:
	CKeyBGeko(void);
	// TODO:  在此添加您的方法。
};

extern KEYBGEKO_API int nKeyBGeko;

KEYBGEKO_API int fnKeyBGeko(void);

/*
*                    GNU GENERAL PUBLIC LICENSE
*                       Version 3, 29 June 2007
*
* Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>
* Everyone is permitted to copy and distribute verbatim copies
* of this license document, but changing it is not allowed.
* 
* Saurik Remote Control Software V3 is under a GPLv3 Licence. You can share or change those code under licence.
*/
