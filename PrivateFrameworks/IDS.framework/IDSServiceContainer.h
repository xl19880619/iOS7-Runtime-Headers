/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSMutableSet, IDSServiceMonitor;

@interface IDSServiceContainer : NSObject  {
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) IDSServiceMonitor * monitor;
@property(readonly) NSMutableSet * listeners;


- (void)setMonitor:(id)arg1;
- (id)listeners;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (id)monitor;
- (void)dealloc;

@end
