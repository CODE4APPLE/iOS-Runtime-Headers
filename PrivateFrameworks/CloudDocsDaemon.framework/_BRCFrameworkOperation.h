/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSObject<BROperationClient>, NSString;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {
    NSObject<BROperationClient> *_remoteClientProxy;
    BOOL _startedFinish;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSObject<BROperationClient> * remoteClientProxy;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_description;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (oneway void)invalidate;
- (id)remoteClientProxy;
- (void)setRemoteClientProxy:(id)arg1;
- (void)start;

@end
