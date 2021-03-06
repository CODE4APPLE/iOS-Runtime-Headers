/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderVariable : NSObject <NSCopying> {
    unsigned int mArraySize;
    NSArray *mElements;
    TSCH3DShaderVariable *mGenericName;
    BOOL mIsSpecial;
    NSString *mName;
    struct NSString { Class x1; } *mPrecision;
    struct TSCH3DShaderType { 
        unsigned int mValue; 
    } mShaderType;
    struct NSString { Class x1; } *mType;
}

@property(readonly) unsigned int arraySize;
@property(readonly) TSCH3DShaderVariable * genericName;
@property(readonly) struct TSCH3DShaderType { unsigned int x1; } initialLinkType;
@property(readonly) BOOL isSpecial;
@property(readonly) NSString * name;
@property(readonly) NSString * precision;
@property(readonly) struct TSCH3DShaderType { unsigned int x1; } shaderType;
@property(readonly) NSString * type;

+ (id)variableWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned int)arg4 shaderType:(struct TSCH3DShaderType { unsigned int x1; })arg5 isSpecial:(BOOL)arg6 generic:(id)arg7;

- (id).cxx_construct;
- (unsigned int)arraySize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)genericName;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned int)arg4 shaderType:(struct TSCH3DShaderType { unsigned int x1; })arg5 isSpecial:(BOOL)arg6 generic:(id)arg7;
- (struct TSCH3DShaderType { unsigned int x1; })initialLinkType;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpecial;
- (id)name;
- (struct NSString { Class x1; }*)precision;
- (struct TSCH3DShaderType { unsigned int x1; })shaderType;
- (struct NSString { Class x1; }*)type;
- (id)variableAtIndex:(unsigned int)arg1;

@end
