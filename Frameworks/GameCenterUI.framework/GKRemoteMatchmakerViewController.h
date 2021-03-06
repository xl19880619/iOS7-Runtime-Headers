/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKMatchmakerViewController, GKGame;

@interface GKRemoteMatchmakerViewController : GKRemoteViewController <GKMatchmakerRemoteDelegate, GKMatchmakerServiceViewControllerDelegate> {
    GKMatchmakerViewController *_delegateWeak;
}

@property GKMatchmakerViewController * delegate;
@property(retain) GKGame * game;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)sendData:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)startMatchingWithRequest:(id)arg1;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsCanceling;
- (void)setupRemoteView;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)applicationWillEnterForeground;
- (void)inviterCancelled;
- (void)setFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(id)arg1 responded:(int)arg2;
- (void)setAutomatchPlayerCount:(int)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
