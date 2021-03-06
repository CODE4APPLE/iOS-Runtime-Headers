/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, QLArchiveTableViewController, QLPreviewController, UIDocumentInteractionController, UINavigationController, UIPopoverPresentationController;

@interface QLArchiveViewer : NSObject <UINavigationControllerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIDocumentInteractionController *_documentInteractionController;
    UINavigationController *_navigationController;
    UIPopoverPresentationController *_presentationController;
    QLPreviewController *_previewController;
    QLArchiveTableViewController *_tableViewController;
    BOOL _visible;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(getter=isVisible,readonly) BOOL visible;

- (void)_cancelUpdateThumbnails;
- (struct CGSize { float x1; float x2; })_imageSize;
- (void)_updateIcon:(id)arg1 forCell:(id)arg2 template:(BOOL)arg3;
- (void)_updateThumbnails;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)initWithPreviewController:(id)arg1;
- (BOOL)isInRegularWidth;
- (BOOL)isVisible;
- (int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned int)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setupViewControllersForPresentationStyle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)update;

@end
