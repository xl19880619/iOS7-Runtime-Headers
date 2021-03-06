/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPropertyGroupItem;

@interface ABPropertyDisambiguationSheet : ABActionSheet  {
    id _sender;
}

@property id sender;
@property(readonly) BOOL needsDisambiguation;
@property(readonly) ABPropertyGroupItem * defaultPropertyItem;


- (id)propertyItemForButtonIndex:(int)arg1;
- (id)defaultPropertyItem;
- (BOOL)needsDisambiguation;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)setSender:(id)arg1;
- (id)sender;

@end
