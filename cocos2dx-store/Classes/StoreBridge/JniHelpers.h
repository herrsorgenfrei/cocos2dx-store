/*
 * Copyright (C) 2012 Soomla Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __cocos2dx_store__JniHelpers__
#define __cocos2dx_store__JniHelpers__

#include "cocos2dx_VirtualItemNotFoundException.h"
#include "cocos2dx_InsufficientFundsException.h"
#include "cocos2dx_NotEnoughGoodsException.h"

class JniHelpers {
public:
	static void jniCommonVoidCall(const char* methodName, const char* classPath)
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static void jniCommonVoidCall(const char* methodName, const char* classPath, bool arg0)
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
    static void jniCommonVoidCall(const char* methodName, const char* classPath, const char* arg0)
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static void jniCommonVoidCall(const char* methodName, const char* classPath, const char* arg0, int arg1)
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
    static int jniCommonIntCall(const char* methodName, const char* classPath, const char* arg0, int arg1) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static int jniCommonIntCall(const char* methodName, const char* classPath, const char* arg0) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static int jniCommonIntCall(const char* methodName, const char* classPath, const char* arg0, const char* arg1) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static string jniCommonStringCall(const char* methodName, const char* classPath, const char* arg0) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static double jniCommonDoubleCall(const char* methodName, const char* classPath, const char* arg0) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
	static bool jniCommonBoolCall(const char* methodName, const char* classPath, const char* arg0) 
		throw(cocos2dx_VirtualItemNotFoundException&, cocos2dx_NotEnoughGoodsException&, cocos2dx_InsufficientFundsException&);
};

#endif /* defined(__cocos2dx_store__JniHelpers__) */
