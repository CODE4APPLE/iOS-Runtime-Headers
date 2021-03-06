/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@class NSData;

@interface PUProtoRequestCompleted : PBCodable <NSCopying> {
    NSData *_errorData;
    unsigned int _messageID;
    BOOL _success;
}

@property(retain) NSData * errorData;
@property(readonly) BOOL hasErrorData;
@property unsigned int messageID;
@property BOOL success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (BOOL)hasErrorData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageID;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (void)writeTo:(id)arg1;

@end
