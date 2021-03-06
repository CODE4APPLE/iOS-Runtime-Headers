/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSNumber, NSString;

@interface NSNumber : NSValue <CKRecordValue, PQLValuable, PQLValuable, TSCHChartGridValue, TSDMixing> {
}

@property(readonly) BOOL boolValue;
@property(readonly) NSNumber * brc_documentID;
@property(readonly) NSNumber * brc_folderID;
@property(readonly) BOOL brc_isDocumentID;
@property(readonly) BOOL brc_isFolderID;
@property(readonly) unsigned long long brc_rawID;
@property(readonly) BOOL charValue;
@property(readonly) int chartGridValueType;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property(copy,readonly) NSString * description;
@property(readonly) double doubleValue;
@property(readonly) float floatValue;
@property(readonly) unsigned int hash;
@property(readonly) int intValue;
@property(readonly) int integerValue;
@property(readonly) long long longLongValue;
@property(readonly) long longValue;
@property(readonly) short shortValue;
@property(copy,readonly) NSString * stringValue;
@property(readonly) Class superclass;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) unsigned int unsignedIntegerValue;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) unsigned long unsignedLongValue;
@property(readonly) unsigned short unsignedShortValue;

+ (id)_gkServerTimeInterval:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)boolFromICSString:(id)arg1;
+ (id)brc_fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2;
+ (id)brc_fileObjectIDWithDocumentID:(unsigned int)arg1;
+ (id)brc_fileObjectIDWithFolderID:(unsigned long long)arg1;
+ (id)cr_numberWithCRContactGroupKind:(unsigned int)arg1;
+ (id)cr_numberWithCRContactID:(long long)arg1;
+ (id)cr_numberWithCRRecentID:(long long)arg1;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)numberWithCGFloat:(float)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithItemIdentifier:(unsigned long long)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(int*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(unsigned int*)arg2;
+ (BOOL)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)tsch_instanceWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (id)tsch_numberWithStyleInt:(int)arg1;
+ (id)tsch_numberWithStyleProperty:(int)arg1;
+ (id)tsch_optionalNumberWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
+ (void)tsch_saveOptionalNumber:(id)arg1 toArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg2 archiver:(id)arg3;

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (float)CGFloatValue;
- (float)CGFloatValue;
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (BOOL)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (id)__ck_localizedString;
- (BOOL)_allowsDirectEncoding;
- (long)_cfNumberType;
- (unsigned long)_cfTypeID;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (unsigned char)_getValue:(void*)arg1 forType:(long)arg2;
- (int)_reverseCompare:(id)arg1;
- (void)appendJsonStringToString:(id)arg1;
- (BOOL)boolValue;
- (id)brc_documentID;
- (id)brc_folderID;
- (BOOL)brc_isDocumentID;
- (BOOL)brc_isFolderID;
- (unsigned long long)brc_rawID;
- (float)cgFloatValue;
- (BOOL)charValue;
- (int)chartGridValueType;
- (Class)classForCoder;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cr_CRContactGroupKindValue;
- (long long)cr_CRContactIDValue;
- (long long)cr_CRRecentIDValue;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (unsigned int)hash;
- (BOOL)hk_hasFloatingPointValue;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithCGFloat:(float)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithInteger:(int)arg1;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (id)initWithLong:(long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (int)intValue;
- (int)integerValue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (BOOL)isFloatingPointType;
- (BOOL)isFloatingPointType;
- (BOOL)isNSNumber__;
- (unsigned long long)itemIdentifierValue;
- (id)localizedString;
- (long long)longLongValue;
- (long)longValue;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (long long)rc_persistentIDValue;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (short)shortValue;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)stringValue;
- (id)tsch_initWithArchive:(const struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;
- (int)tsch_styleIntValue;
- (int)tsch_stylePropertyValue;
- (int)tss_propertyValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned int)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
