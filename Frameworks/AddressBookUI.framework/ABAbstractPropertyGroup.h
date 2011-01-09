/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;



@interface ABAbstractPropertyGroup : NSObject 
{
    NSArray *_people;
    BOOL _hasChanges;
}

@property BOOL hasChanges;
@property(retain) NSArray *people;


- (id)init;
- (void)dealloc;
- (void)setPeople:(id)arg1;
- (id)people;
- (void)updateRecord;
- (void)reloadFromModel;
- (BOOL)canSave;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)arg1;
- (NSInteger)property;

@end