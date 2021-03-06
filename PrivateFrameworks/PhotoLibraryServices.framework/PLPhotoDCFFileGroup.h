/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, NSString, PLPhotoDCFDirectory, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject  {
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned int _hash;
    unsigned int _hashComputed : 1;
    unsigned int _addedExtensions : 1;
    unsigned int _writeIsPending : 1;
}

+ (id)allMetadataFileExtensions;

- (id)pathForTrimmedVideoFile;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (BOOL)isWritePending;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedThumbnail;
- (id)pathForLowResolutionFile;
- (id)pathForThumbnailFile;
- (void)createMetadataDirectoryIfNecessary;
- (id)pathForMetadataWithGroupName;
- (id)pathForContainingDirectory;
- (id)extensions;
- (void)forceAddExtensionsFromMetadataDirectory;
- (BOOL)isValidImage;
- (BOOL)hasObsoleteFiles;
- (void)deleteObsoleteFiles;
- (id)imageSourceTypeHint;
- (id)videoPreviewFilename;
- (id)lowResolutionFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)thumbnailFilename;
- (void)addExtensionsFromMetadataDirectory;
- (BOOL)hasVideoFile;
- (id)pathForGroupWithoutExtension;
- (id)prebakedThumbnailFilename;
- (id)pathForMetadata;
- (void)setWriteIsPending:(BOOL)arg1;
- (void)deleteFiles;
- (void)addExtension:(id)arg1;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForPrebakedThumbnail;
- (BOOL)hasThumbnail;
- (id)directory;
- (id)pathForVideoFile;
- (id)pathForFullSizeImage;
- (id)pathForVideoPreviewFile;
- (id)date;
- (void)setDelegate:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isValid;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)setDate:(id)arg1;

@end
