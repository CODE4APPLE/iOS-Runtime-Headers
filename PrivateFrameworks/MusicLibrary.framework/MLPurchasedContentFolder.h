/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, RunLoopContinuation, NSString, NSMutableSet;



@interface MLPurchasedContentFolder : NSObject 
{
    NSMutableSet *_purchasedContentXMLFilesLoaded;
    NSMutableDictionary *_purchasedContentInfo;
    NSString *_basePath;
    id _delegate;
    RunLoopContinuation *_loadPurchasesContinuation;
    double _lastPurchaseNotificationTime;
}

@property(readonly) NSString *basePath;

+ (void)_createParentFolderIfNecessary:(id)arg1;
+ (void)setShouldImportPurchasesSynchronously:(BOOL)arg1;

- (id)_storePurchasesInfoFilePath;
- (id)_mobileDBTrackInfoPath;
- (void)_loadSavedPurchaseDB;
- (void)_savePurchaseDBInfo;
- (void)_removeXMLFilenameFromPurchasedConent:(id)arg1;
- (id)purchasedContentXMLFilenames;
- (BOOL)_updatePurchasedContentInfoWithXMLFilename:(id)arg1 itemInserted:(BOOL*)arg2;
- (id)initWithBasePath:(id)arg1 delegate:(id)arg2;
- (void)clearWeakReference:(id)arg1;
- (void)dealloc;
- (NSUInteger)countOfPurchasedContent;
- (BOOL)_reloadPurchasedContentData;
- (BOOL)_continueUpdatingPurchasedContent:(id)arg1;
- (void)_finishUpdatingPurchasedContent:(id)arg1;
- (BOOL)reloadPurchasedContentData;
- (id)mobileArtworkDBPath;
- (void)removeReferencesToAssetFilename:(id)arg1;
- (id)basePath;

@end