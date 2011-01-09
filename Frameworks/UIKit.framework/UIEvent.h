/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIEvent : NSObject 
{
    double _timestamp;
}

@property(readonly) NSInteger type;
@property(readonly) NSInteger subtype;
@property(readonly) double timestamp;


- (NSInteger)type;
- (NSInteger)subtype;
- (double)timestamp;
- (id)allTouches;
- (id)touchesForWindow:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)_init;
- (void)_setTimestamp:(double)arg1;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (struct __GSEvent { }*)_gsEvent;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (NSInteger)_shakeState;
- (id)_mk_copyReplacingTouch:(id)arg1 withTouch:(id)arg2;

@end