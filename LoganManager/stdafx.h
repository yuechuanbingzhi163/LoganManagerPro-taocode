// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件:
#include <windows.h>

// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: 在此处引用程序需要的其他头文件

#include "resource.h"
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>


#include "../LoganUI/UIlib.h"
#include "tinystr.h"
#include "tinyxml.h"


using namespace std;							
using namespace DuiLib;

#ifdef _DEBUG									
#pragma comment(lib, "..\\lib\\DuiLib_d.lib")
#else											
#pragma comment(lib, "..\\lib\\DuiLib.lib")
#endif



//#include "../VideoPlayer/IVideoPlayer.h"
//#ifdef _DEBUG
//#pragma  comment(lib,"../lib/VideoPlayerD.lib")
//#else
//#pragma  comment(lib,"../lib/VideoPlayer.lib")
//#endif

#include "ILivePlayer.h"
#ifdef _DEBUG
#pragma comment(lib,"../lib/LivePlayerD.lib")
#else
#pragma comment(lib,"../lib/LivePlayer.lib")
#endif
#define WM_SINGLE_WINDOW					WM_USER+300
#define WM_MESSAGEBOX						WM_USER+301


//#define VLC_VIDEO


extern map<string,string>IpTable;