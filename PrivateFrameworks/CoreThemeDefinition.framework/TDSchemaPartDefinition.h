/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSArray, CUIImage, NSString, TDSchemaDefinition, NSSet;

@interface TDSchemaPartDefinition : NSManagedObject  {
    CUIImage *previewImage;
    NSArray *renditions;
    NSArray *renditionGroups;
    unsigned int partFeatures;
}

@property(retain) NSString * name;
@property(retain) NSString * widgetID;
@property(retain) TDSchemaDefinition * element;
@property(retain) NSSet * productions;
@property(retain) CUIImage * previewImage;
@property(copy) NSArray * renditions;
@property(retain) NSArray * renditionGroups;
@property unsigned int partFeatures;


- (id)renditionGroups;
- (int)partID;
- (id)validStatesWithDocument:(id)arg1;
- (id)bestPreviewRendition;
- (int)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;
- (void)updateDerivedRenditionData;
- (void)setPartFeatures:(unsigned int)arg1;
- (void)setRenditionGroups:(id)arg1;
- (const struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)cuiPartDefinition;
- (id)_schema;
- (void)setPreviewImage:(id)arg1;
- (id)previewImage;
- (void)didTurnIntoFault;
- (int)elementID;
- (id)displayName;
- (unsigned int)partFeatures;
- (void)setRenditions:(id)arg1;
- (id)renditions;

@end
