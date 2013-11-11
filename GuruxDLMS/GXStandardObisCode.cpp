//
// --------------------------------------------------------------------------
//  Gurux Ltd
// 
//
//
// Filename:        $HeadURL$
//
// Version:         $Revision$,
//                  $Date$
//                  $Author$
//
// Copyright (c) Gurux Ltd
//
//---------------------------------------------------------------------------
//
//  DESCRIPTION
//
// This file is a part of Gurux Device Framework.
//
// Gurux Device Framework is Open Source software; you can redistribute it
// and/or modify it under the terms of the GNU General Public License 
// as published by the Free Software Foundation; version 2 of the License.
// Gurux Device Framework is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
// See the GNU General Public License for more details.
//
// More information of Gurux products: http://www.gurux.org
//
// This code is licensed under the GNU General Public License v2. 
// Full text may be retrieved at http://www.gnu.org/licenses/gpl-2.0.txt
//---------------------------------------------------------------------------

#include "GXStandardObisCode.h"

CGXStandardObisCode::CGXStandardObisCode(vector< basic_string<char> > obis, 
					basic_string<char>& desc, 
					basic_string<char>& interfaces, basic_string<char>& dataType)
{
	if (obis.size() != 6)
	{
		int mikko = 1;//assert(true); //Mikko
	}
    m_OBIS.clear();
	m_OBIS.insert(m_OBIS.end(), obis.begin(), obis.end());
    SetDescription(desc);
    SetInterfaces(interfaces);
    SetDataType(dataType);
}

vector< basic_string<char> >& CGXStandardObisCode::GetOBIS()
{
    return m_OBIS;
}

void CGXStandardObisCode::SetOBIS(vector< basic_string<char> >& value)
{	
	m_OBIS.clear();
	m_OBIS.insert(m_OBIS.end(), value.begin(), value.end());
}

/** 
 m_OBIS code description.
*/
basic_string<char>& CGXStandardObisCode::GetDescription()
{
    return m_Description;
}
void CGXStandardObisCode::SetDescription(basic_string<char> value)
{
    m_Description = value;
}

/** 
 m_Interfaces that are using this m_OBIS code.
*/
basic_string<char>& CGXStandardObisCode::GetInterfaces()
{
    return m_Interfaces;
}
void CGXStandardObisCode::SetInterfaces(basic_string<char> value)
{
    m_Interfaces = value;
}

/** 
 Standard data types.
*/        
basic_string<char>& CGXStandardObisCode::GetDataType()
{
    return m_DataType;
}

void CGXStandardObisCode::SetDataType(basic_string<char> value)
{
    m_DataType = value;
}