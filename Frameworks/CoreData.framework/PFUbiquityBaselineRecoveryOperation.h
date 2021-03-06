/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject<PFUbiquityBaselineRecoveryOperationDelegate>;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation  {
}

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> * delegate;


- (id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2;
- (BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2;
- (BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1;
- (BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2;
- (BOOL)conflictsExistForBaseline:(id)arg1;
- (BOOL)hasCurrentBaseline;
- (BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)delegate;
- (void)main;

@end
