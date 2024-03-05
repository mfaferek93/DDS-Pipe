// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file union_structTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "union_struct.h"
#include "union_structTypeObject.h"
#include <mutex>
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerunion_structTypes()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("MyUnion", GetMyUnionIdentifier(true),
                GetMyUnionObject(true));
                factory->add_type_object("MyUnion", GetMyUnionIdentifier(false),
                GetMyUnionObject(false));

                factory->add_type_object("union_struct", Getunion_structIdentifier(true),
                Getunion_structObject(true));
                factory->add_type_object("union_struct", Getunion_structIdentifier(false),
                Getunion_structObject(false));

            });
}

const TypeIdentifier* GetMyUnionIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("MyUnion", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetMyUnionObject(complete);
    return TypeObjectFactory::get_instance()->get_type_identifier("MyUnion", complete);
}

const TypeObject* GetMyUnionObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteMyUnionObject();
    }
    // else
    return GetMinimalMyUnionObject();
}

const TypeObject* GetMinimalMyUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_UNION);

    type_object->minimal().union_type().union_flags().IS_FINAL(false);
    type_object->minimal().union_type().union_flags().IS_APPENDABLE(false);
    type_object->minimal().union_type().union_flags().IS_MUTABLE(false);
    type_object->minimal().union_type().union_flags().IS_NESTED(false);
    type_object->minimal().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->minimal().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->minimal().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->minimal().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    MemberId memberId = 0;
    MinimalUnionMember mst_octet_value;
    mst_octet_value.common().member_id(memberId++);
    mst_octet_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_octet_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_octet_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_octet_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_octet_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_octet_value.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_octet_value.common().member_flags().IS_DEFAULT(false);
    mst_octet_value.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));

    mst_octet_value.common().label_seq().emplace_back(1);
    MD5 octet_value_hash("octet_value");
    for(int i = 0; i < 4; ++i)
    {
        mst_octet_value.detail().name_hash()[i] = octet_value_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_octet_value);

    MinimalUnionMember mst_long_value;
    mst_long_value.common().member_id(memberId++);
    mst_long_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_long_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_long_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_long_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_long_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_long_value.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_long_value.common().member_flags().IS_DEFAULT(false);
    mst_long_value.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));

    mst_long_value.common().label_seq().emplace_back(2);
    MD5 long_value_hash("long_value");
    for(int i = 0; i < 4; ++i)
    {
        mst_long_value.detail().name_hash()[i] = long_value_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_long_value);

    MinimalUnionMember mst_string_value;
    mst_string_value.common().member_id(memberId++);
    mst_string_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_string_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_string_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_string_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    mst_string_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    mst_string_value.common().member_flags().IS_KEY(false); // Doesn't apply
    mst_string_value.common().member_flags().IS_DEFAULT(false);
    mst_string_value.common().type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


    mst_string_value.common().label_seq().emplace_back(3);
    MD5 string_value_hash("string_value");
    for(int i = 0; i < 4; ++i)
    {
        mst_string_value.detail().name_hash()[i] = string_value_hash.digest[i];
    }
    type_object->minimal().union_type().member_seq().emplace_back(mst_string_value);


    // Header
    //type_object->minimal().union_type().header().detail()... // Empty

    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalUnionType::getCdrSerializedSize(type_object->minimal().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion", false);
}

const TypeObject* GetCompleteMyUnionObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("MyUnion", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_UNION);

    type_object->complete().union_type().union_flags().IS_FINAL(false);
    type_object->complete().union_type().union_flags().IS_APPENDABLE(false);
    type_object->complete().union_type().union_flags().IS_MUTABLE(false);
    type_object->complete().union_type().union_flags().IS_NESTED(false);
    type_object->complete().union_type().union_flags().IS_AUTOID_HASH(false); // Unsupported

    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_EXTERNAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    type_object->complete().union_type().discriminator().common().member_flags().IS_KEY(false); // Unsupported
    type_object->complete().union_type().discriminator().common().member_flags().IS_DEFAULT(false); // Doesn't apply

    type_object->complete().union_type().discriminator().common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    MemberId memberId = 0;
    CompleteUnionMember cst_octet_value;
    cst_octet_value.common().member_id(memberId++);
    cst_octet_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_octet_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_octet_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_octet_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_octet_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_octet_value.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_octet_value.common().member_flags().IS_DEFAULT(false);
    cst_octet_value.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint8_t", false));
    cst_octet_value.common().label_seq().emplace_back(1);

    cst_octet_value.detail().name("octet_value");

    type_object->complete().union_type().member_seq().emplace_back(cst_octet_value);

    CompleteUnionMember cst_long_value;
    cst_long_value.common().member_id(memberId++);
    cst_long_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_long_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_long_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_long_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_long_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_long_value.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_long_value.common().member_flags().IS_DEFAULT(false);
    cst_long_value.common().type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));
    cst_long_value.common().label_seq().emplace_back(2);

    cst_long_value.detail().name("long_value");

    type_object->complete().union_type().member_seq().emplace_back(cst_long_value);

    CompleteUnionMember cst_string_value;
    cst_string_value.common().member_id(memberId++);
    cst_string_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_string_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_string_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_string_value.common().member_flags().IS_OPTIONAL(false); // Doesn't apply
    cst_string_value.common().member_flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
    cst_string_value.common().member_flags().IS_KEY(false); // Doesn't apply
    cst_string_value.common().member_flags().IS_DEFAULT(false);
    cst_string_value.common().type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));

    cst_string_value.common().label_seq().emplace_back(3);

    cst_string_value.detail().name("string_value");

    type_object->complete().union_type().member_seq().emplace_back(cst_string_value);


    // Header
    type_object->complete().union_type().header().detail().type_name("MyUnion");


    TypeIdentifier* identifier = new TypeIdentifier();
    identifier->_d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteUnionType::getCdrSerializedSize(type_object->complete().union_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier->equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("MyUnion", identifier, type_object);
    delete type_object;
    delete identifier;
    return TypeObjectFactory::get_instance()->get_type_object("MyUnion", true);
}

const TypeIdentifier* Getunion_structIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("union_struct", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    Getunion_structObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("union_struct", complete);
}

const TypeObject* Getunion_structObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("union_struct", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteunion_structObject();
    }
    //else
    return GetMinimalunion_structObject();
}

const TypeObject* GetMinimalunion_structObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("union_struct", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_index;
    mst_index.common().member_id(memberId++);
    mst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_index.common().member_flags().IS_OPTIONAL(false);
    mst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_index.common().member_flags().IS_KEY(false);
    mst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    MD5 index_hash("index");
    for(int i = 0; i < 4; ++i)
    {
        mst_index.detail().name_hash()[i] = index_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_index);

    MinimalStructMember mst_union_value;
    mst_union_value.common().member_id(memberId++);
    mst_union_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_union_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_union_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_union_value.common().member_flags().IS_OPTIONAL(false);
    mst_union_value.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_union_value.common().member_flags().IS_KEY(false);
    mst_union_value.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_union_value.common().member_type_id(*GetMyUnionIdentifier(false));
    MD5 union_value_hash("union_value");
    for(int i = 0; i < 4; ++i)
    {
        mst_union_value.detail().name_hash()[i] = union_value_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_union_value);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    SerializedPayload_t payload(static_cast<uint32_t>(
        MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("union_struct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("union_struct", false);
}

const TypeObject* GetCompleteunion_structObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("union_struct", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_index;
    cst_index.common().member_id(memberId++);
    cst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_index.common().member_flags().IS_OPTIONAL(false);
    cst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_index.common().member_flags().IS_KEY(false);
    cst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));

    cst_index.detail().name("index");

    type_object->complete().struct_type().member_seq().emplace_back(cst_index);

    CompleteStructMember cst_union_value;
    cst_union_value.common().member_id(memberId++);
    cst_union_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_union_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_union_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_union_value.common().member_flags().IS_OPTIONAL(false);
    cst_union_value.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_union_value.common().member_flags().IS_KEY(false);
    cst_union_value.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_union_value.common().member_type_id(*GetMyUnionIdentifier(true));
    cst_union_value.detail().name("union_value");

    type_object->complete().struct_type().member_seq().emplace_back(cst_union_value);


    // Header
    type_object->complete().struct_type().header().detail().type_name("union_struct");
    // TODO inheritance


    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    SerializedPayload_t payload(static_cast<uint32_t>(
        CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload.encapsulation = CDR_LE;

    type_object->serialize(ser);
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("union_struct", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("union_struct", true);
}