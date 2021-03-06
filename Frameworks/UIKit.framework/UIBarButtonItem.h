/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSSet, NSString, UIBarButtonItem, UIColor, UIImage, UINavigationItem, UIToolbarButton, UIView;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
    BOOL __hidden;
    UIBarButtonItem *__itemVariation;
    BOOL __needsViewUpdateForLetterpressImage;
    UINavigationItem *__owningNavigationItem;
    BOOL __showsBackButtonIndicator;
    BOOL __viewWantsLetterpressImage;
    SEL _action;
    id _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
        unsigned int imageHasEffects : 1; 
    } _barButtonItemFlags;
    BOOL _flexible;
    UIImage *_image;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _landscapeImagePhoneInsets;
    float _maximumWidth;
    float _minimumWidth;
    NSSet *_possibleSystemItems;
    NSSet *_possibleTitles;
    NSDictionary *_stylesForSizingTitles;
    int _tag;
    id _target;
    NSString *_title;
    float _toolbarCharge;
    UIView *_view;
    float _width;
}

@property(setter=_setFlexible:) BOOL _flexible;
@property(setter=_setHidden:) BOOL _hidden;
@property(setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property(setter=_setItemVariation:,retain) UIBarButtonItem * _itemVariation;
@property(setter=_setMaximumWidth:) float _maximumWidth;
@property(setter=_setMinimumWidth:) float _minimumWidth;
@property(readonly) BOOL _needsViewUpdateForLetterpressImage;
@property(setter=_setOwningNavigationItem:) UINavigationItem * _owningNavigationItem;
@property(setter=_setPossibleItemVariations:,copy) NSSet * _possibleItemVariations;
@property(setter=_setShowsBackButtonIndicator:) BOOL _showsBackButtonIndicator;
@property(setter=_setStylesForSizingTitles:,copy) NSDictionary * _stylesForSizingTitles;
@property(readonly) UIToolbarButton * _toolbarButton;
@property(setter=_setToolbarCharge:) float _toolbarCharge;
@property(readonly) BOOL _viewWantsLetterpressImage;
@property SEL action;
@property(retain) UIView * customView;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isSystemItem;
@property(getter=_miniImage,setter=_setMiniImage:,retain) UIImage * miniImage;
@property(getter=_miniImageInsets,setter=_setMiniImageInsets:) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } miniImageInsets;
@property(getter=_possibleSystemItems,setter=_setPossibleSystemItems:,copy) NSSet * possibleSystemItems;
@property(copy) NSSet * possibleTitles;
@property BOOL selected;
@property int style;
@property(readonly) int systemItem;
@property id target;
@property(retain) UIColor * tintColor;
@property float width;

+ (id)_appearanceBlindViewClasses;
+ (id)_ckBarButtonItemWithTitle:(id)arg1 style:(int)arg2;
+ (void)_getSystemItemStyle:(int*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(int)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(int)arg9 usingItemStyle:(int)arg10;
+ (id)ckCancelBarButtonItem;
+ (id)ckDoneBarButtonItem;
+ (id)ckEditBarButtonItem;
+ (id)ckEditDoneButtonPossibleItemVariations;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;

- (id)_appearanceStorage;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (BOOL)_flexible;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { float x1; float x2; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 landscape:(BOOL)arg3;
- (void)_getSystemItemStyle:(int*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(int)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg3 forBarStyle:(int)arg4 landscape:(BOOL)arg5 alwaysBordered:(BOOL)arg6;
- (BOOL)_hidden;
- (BOOL)_imageHasEffects;
- (BOOL)_isImageBarButtonItem;
- (id)_itemVariation;
- (float)_leftImagePaddingForEdgeMarginInNavBar;
- (float)_maximumWidth;
- (id)_miniImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_miniImageInsets;
- (float)_minimumWidth;
- (BOOL)_needsViewUpdateForLetterpressImage;
- (id)_owningNavigationItem;
- (id)_possibleItemVariations;
- (id)_possibleSystemItems;
- (float)_rightImagePaddingForEdgeMarginInNavBar;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setFlexible:(BOOL)arg1;
- (void)_setHidden:(BOOL)arg1;
- (void)_setImageHasEffects:(BOOL)arg1;
- (void)_setItemVariation:(id)arg1;
- (void)_setMaximumWidth:(float)arg1;
- (void)_setMiniImage:(id)arg1;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setMinimumWidth:(float)arg1;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_setPossibleItemVariations:(id)arg1;
- (void)_setPossibleSystemItems:(id)arg1;
- (void)_setShowsBackButtonIndicator:(BOOL)arg1;
- (void)_setStylesForSizingTitles:(id)arg1;
- (void)_setSystemItem:(int)arg1;
- (void)_setToolbarCharge:(float)arg1;
- (void)_setWidth:(float)arg1;
- (BOOL)_shouldBezelSystemButtonImage;
- (BOOL)_showsBackButtonIndicator;
- (id)_stylesForSizingTitles;
- (id)_toolbarButton;
- (float)_toolbarCharge;
- (void)_updateView;
- (BOOL)_viewWantsLetterpressImage;
- (float)_width;
- (SEL)action;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (struct UIOffset { float x1; float x2; })backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 barMetrics:(int)arg3;
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)customView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)isCustomViewItem;
- (BOOL)isEnabled;
- (BOOL)isMinibarView;
- (BOOL)isSystemItem;
- (id)itemVariation;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })landscapeImagePhoneInsets;
- (void)mf_setImageOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)mf_setImageVerticalOffset:(float)arg1;
- (void)mf_setMiniImageOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)mf_setMiniImageVerticalOffset:(float)arg1;
- (id)nextResponder;
- (id)possibleTitles;
- (id)scriptingID;
- (BOOL)selected;
- (void)setAction:(SEL)arg1;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIsMinibarView:(BOOL)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setTag:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setView:(id)arg1;
- (void)setWidth:(float)arg1;
- (int)style;
- (int)systemItem;
- (int)tag;
- (id)target;
- (id)tintColor;
- (id)title;
- (struct UIOffset { float x1; float x2; })titlePositionAdjustmentForBarMetrics:(int)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)view;
- (float)width;
- (id)window;

@end
