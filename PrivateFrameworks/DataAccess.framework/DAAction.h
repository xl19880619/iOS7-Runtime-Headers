/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <NSCoding><NSObject>;

@interface DAAction : NSObject <NSCoding> {
    int _itemChangeType;
    id _serverId;
    <NSCoding><NSObject> *_changedItem;
    int _changeId;
}

@property(readonly) int itemChangeType;
@property(readonly) id serverId;
@property(retain) id changedItem;
@property int changeId;


- (id)deletedNoteID;
- (struct ASToDo { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; int x9; id x10; int x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; void *x18; id x19; id x20; id x21; id x22; id x23; id x24; id x25; id x26; id x27; id x28; id x29; id x30; id x31; id x32; id x33; }*)toDo;
- (id)deletedToDoID;
- (void)setChangeId:(int)arg1;
- (int)changeId;
- (id)changedItem;
- (void)_setChangedItem:(id)arg1;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)stringForItemChangeType:(int)arg1;
- (id)deletedContactID;
- (id)deletedEventID;
- (int)itemChangeType;
- (id)serverId;
- (struct ASNote { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; int x9; id x10; int x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; id x18; id x19; id x20; BOOL x21; id x22; id x23; id x24; id x25; }*)note;
- (struct ASContact { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; int x9; id x10; int x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; void *x18; id x19; id x20; id x21; id x22; id x23; int x24; BOOL x25; id x26; id x27; id x28; id x29; id x30; id x31; id x32; id x33; id x34; id x35; id x36; id x37; id x38; id x39; id x40; id x41; id x42; id x43; id x44; id x45; id x46; id x47; id x48; id x49; id x50; id x51; id x52; id x53; id x54; id x55; id x56; id x57; id x58; id x59; id x60; id x61; id x62; id x63; id x64; id x65; id x66; id x67; id x68; id x69; id x70; id x71; id x72; id x73; id x74; id x75; id x76; id x77; id x78; id x79; id x80; id x81; int x82; }*)contact;
- (id)message;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (struct ASEvent { Class x1; id x2; id x3; int x4; int x5; id x6; int x7; id x8; int x9; id x10; int x11; id x12; id x13; id x14; BOOL x15; BOOL x16; id x17; void *x18; id x19; id x20; id x21; id x22; id x23; id x24; id x25; id x26; id x27; id x28; id x29; id x30; id x31; id x32; id x33; id x34; id x35; id x36; id x37; id x38; id x39; id x40; id x41; int x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; id x49; }*)event;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
