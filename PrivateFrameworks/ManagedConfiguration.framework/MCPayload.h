/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, MCProfile, NSDictionary;

@interface MCPayload : NSObject  {
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    int _version;
    NSString *_persistentResourceID;
    BOOL _mustInstallNonInteractively;
}

@property(readonly) MCProfile * profile;
@property(readonly) NSString * friendlyName;
@property(readonly) NSString * type;
@property(readonly) NSString * payloadDescription;
@property(retain) NSString * displayName;
@property(readonly) NSString * identifier;
@property(readonly) NSString * organization;
@property(readonly) NSString * UUID;
@property(readonly) int version;
@property(retain) NSString * persistentResourceID;
@property(readonly) NSDictionary * restrictions;
@property BOOL mustInstallNonInteractively;
@property(readonly) NSArray * installationWarnings;

+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)wrapperPayloadDictionary;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)badFieldTypeErrorWithField:(id)arg1;

- (id)payloadDescription;
- (void)setPersistentResourceID:(id)arg1;
- (void)setMustInstallNonInteractively:(BOOL)arg1;
- (BOOL)mustInstallNonInteractively;
- (id)persistentResourceID;
- (id)organization;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)installationWarnings;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)friendlyName;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)restrictions;
- (id)title;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)profile;
- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)UUID;
- (id)type;
- (int)version;

@end
