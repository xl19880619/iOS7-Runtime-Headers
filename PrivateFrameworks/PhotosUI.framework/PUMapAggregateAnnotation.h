/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSMutableSet, NSString, NSDate, NSObject;

@interface PUMapAggregateAnnotation : NSObject <PUMapAnnotationAnimatable> {
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    unsigned int _hash;
    NSMutableSet *_subAnnotations;
    NSArray *_mapItems;
    NSObject *_itemId;
    unsigned int _relativeOrder;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;
@property(readonly) struct { double x1; double x2; } originalCoordinate;
@property(readonly) NSObject * itemId;
@property(readonly) NSDate * dateCreated;
@property(readonly) unsigned int count;
@property(readonly) NSArray * mapItems;
@property(readonly) NSMutableSet * subAnnotations;
@property unsigned int relativeOrder;


- (void)removeAllSubAnnotations;
- (void)removeSubAnnotation:(id)arg1;
- (void)_updateComputedValuesForSubAnnotationUpdate;
- (void)addSubAnnotation:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 mapItems:(id)arg2;
- (void)setRelativeOrder:(unsigned int)arg1;
- (unsigned int)relativeOrder;
- (id)subAnnotations;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (void)resetCoordinateToOriginal;
- (id)mapItems;
- (id)itemId;
- (id)newestMaxMapItems:(unsigned int)arg1;
- (id)dateCreated;
- (BOOL)containsAnnotation:(id)arg1;
- (id)compactDescription;
- (struct { double x1; double x2; })originalCoordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)title;
- (struct { double x1; double x2; })coordinate;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)count;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)subtitle;

@end
