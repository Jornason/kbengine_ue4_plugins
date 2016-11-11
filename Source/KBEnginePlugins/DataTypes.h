// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KBECommon.h"

class MemoryStream;

/*
	entitydef所支持的基本数据类型
	改模块中的类抽象出了所有的支持类型并提供了这些类型的数据序列化成二进制数据与反序列化操作（主要用于网络通讯的打包与解包）
*/
class KBENGINEPLUGINS_API KBEDATATYPE_BASE
{
public:
		virtual void bind()
		{
		}

		static bool isNumeric(FVariant& v)
		{
			return v.GetType() == EVariantTypes::Bool || 
				v.GetType() == EVariantTypes::Double ||
				v.GetType() == EVariantTypes::Float ||
				v.GetType() == EVariantTypes::Int8 ||
				v.GetType() == EVariantTypes::Int16 ||
				v.GetType() == EVariantTypes::Int32 ||
				v.GetType() == EVariantTypes::Int64 ||
				v.GetType() == EVariantTypes::UInt8 ||
				v.GetType() == EVariantTypes::UInt16 ||
				v.GetType() == EVariantTypes::UInt32 ||
				v.GetType() == EVariantTypes::UInt64;
		}

		virtual FVariant* createFromStream(MemoryStream& stream)
		{
			return NULL;
		}
		
		virtual void addToStream(Bundle& stream, FVariant& v)
		{
		}
		
		virtual FVariant* parseDefaultValStr(FString& v)
		{
			return NULL;
		}
		
		virtual bool isSameType(FVariant& v)
		{
			return v == NULL;
		}
		
protected:

};

class KBENGINEPLUGINS_API KBEDATATYPE_INT8 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_INT16 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_INT32 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_INT64 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_UINT8 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_UINT16 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_UINT32 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_UINT64 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_FLOAT : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_DOUBLE : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_STRING : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_VECTOR2 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_VECTOR3 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_VECTOR4 : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_PYTHON : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_UNICODE : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_MAILBOX : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_BLOB : public KBEDATATYPE_BASE
{
public:
	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;
};

class KBENGINEPLUGINS_API KBEDATATYPE_ARRAY : public KBEDATATYPE_BASE
{
public:
	virtual void bind() override;

	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;

public:
	KBEDATATYPE_BASE* vtype;
};

class KBENGINEPLUGINS_API KBEDATATYPE_FIXED_DICT : public KBEDATATYPE_BASE
{
public:
	virtual void bind() override;

	virtual FVariant* createFromStream(MemoryStream& stream) override;
	virtual void addToStream(Bundle& stream, FVariant& v) override;

	virtual FVariant* parseDefaultValStr(FString& v) override;

	virtual bool isSameType(FVariant& v) override;

public:
	KBEDATATYPE_BASE* vtype;
};













