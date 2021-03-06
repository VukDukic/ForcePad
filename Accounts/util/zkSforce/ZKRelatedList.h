// Copyright (c) 2010 Ron Hess
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//

#import "ZKXmlDeserializer.h"

/*
 <element name="columns" type="tns:RelatedListColumn" maxOccurs="unbounded"/>
 <element name="custom" type="xsd:boolean"/>
 <element name="field" type="xsd:string" nillable="true"/>
 <element name="label" type="xsd:string"/>
 <element name="limitRows" type="xsd:int"/>
 <element name="name" type="xsd:string"/>
 <element name="sobject" type="xsd:string" nillable="true"/>
 <element name="sort" type="tns:RelatedListSort" minOccurs="0" maxOccurs="unbounded"/> 
 */
@interface ZKRelatedList: ZKXmlDeserializer {
	NSArray *columns;
	NSArray *sort;
}

- (NSArray *) columns;
- (BOOL) custom;
- (NSString *) field;
- (NSString *) label;
- (NSInteger ) limitRows;
- (NSString *) name;
- (NSString *) sobject;
- (NSArray *) sort;

- (NSString *) columnsFieldNames ;
- (NSString *) describe ;

@end
