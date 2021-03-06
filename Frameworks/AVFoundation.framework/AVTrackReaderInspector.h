/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector  {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}


- (struct OpaqueFigTrackReader { }*)_trackReader;
- (unsigned long)_figMediaType;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (id)extendedLanguageTag;
- (float)estimatedDataRate;
- (long long)totalSampleDataLength;
- (BOOL)isSelfContained;
- (id)formatDescriptions;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (int)naturalTimeScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (id)mediaType;
- (int)trackID;
- (int)layer;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;
- (id)asset;
- (struct CGSize { float x1; float x2; })dimensions;

@end
