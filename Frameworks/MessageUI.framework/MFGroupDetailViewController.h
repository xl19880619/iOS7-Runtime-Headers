/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFRecentComposeRecipientGroup, <MFGroupDetailViewControllerDelegate>;

@interface MFGroupDetailViewController : UITableViewController <UIActionSheetDelegate> {
    <MFGroupDetailViewControllerDelegate> *_delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property <MFGroupDetailViewControllerDelegate> * delegate;
@property(retain) MFRecentComposeRecipientGroup * group;


- (void)_removeButtonTapped:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)group;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
