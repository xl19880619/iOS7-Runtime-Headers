/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator  {
    NSMutableArray *_mailboxes;
    unsigned int _index;
    BOOL _includeHidden;
}


- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2;
- (id)nextObject;
- (void)dealloc;

@end
