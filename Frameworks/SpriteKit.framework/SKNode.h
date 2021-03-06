/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SKNode, SKPhysicsBody, SKScene, NSMutableArray, NSString, NSMutableDictionary, NSArray;

@interface SKNode : UIResponder <NSCopying, NSCoding> {
    BOOL _spritesNeedsRemove;
    NSMutableArray *_actionsToRemove;
    NSMutableArray *_spritesToRemove;
    void *csprite;
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    BOOL _needsDelete;
    NSMutableArray *_deleteList;
    NSString *_name;
    NSMutableDictionary *_userData;
}

@property BOOL _showBounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _untransformedBounds;
@property struct CGPoint { float x1; float x2; } _anchorPoint;
@property(readonly) struct CGSize { float x1; float x2; } _size;
@property(retain) NSMutableDictionary * _info;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property struct CGPoint { float x1; float x2; } position;
@property float zPosition;
@property float zRotation;
@property float xScale;
@property float yScale;
@property float speed;
@property float alpha;
@property(getter=isPaused) BOOL paused;
@property(getter=isHidden) BOOL hidden;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(readonly) SKNode * parent;
@property(readonly) NSArray * children;
@property(copy) NSString * name;
@property(readonly) SKScene * scene;
@property(retain) SKPhysicsBody * physicsBody;
@property(retain) NSMutableDictionary * userData;
@property float xRotation;
@property float yRotation;

+ (id)node;

- (void)insertChild:(id)arg1 atIndex:(int)arg2;
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2;
- (void)set_anchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_untransformedBounds;
- (BOOL)_showBounds;
- (void)set_showBounds:(BOOL)arg1;
- (id)childrenInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })_anchorPoint;
- (BOOL)hasUniformAlphaAndIsVisible;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toNode:(id)arg2;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1 withRadius:(float)arg2;
- (void)setYRotation:(float)arg1;
- (float)yRotation;
- (void)setXRotation:(float)arg1;
- (float)xRotation;
- (BOOL)hasActions;
- (id)containingView;
- (void)runAction:(id)arg1 completion:(id)arg2;
- (BOOL)hasChildren;
- (void)_performCleanup;
- (void)removeAllChildren;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeChildAtIndex:(int)arg1;
- (BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2;
- (id)nodesAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)nodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2 stopPointer:(BOOL*)arg3;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2;
- (BOOL)inParentHierarchy:(id)arg1;
- (id)physicsBody;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)setPhysicsBody:(id)arg1;
- (void)set_info:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateAccumulatedFrame;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (id)nodeAtPoint:(struct CGPoint { float x1; float x2; })arg1 recursive:(BOOL)arg2;
- (void)runAction:(id)arg1 withKey:(id)arg2;
- (void)removeActionForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromNode:(id)arg2;
- (id)scene;
- (struct CGPoint { float x1; float x2; })convertPointToParent:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointFromParent:(struct CGPoint { float x1; float x2; })arg1;
- (void)setZRotation:(float)arg1;
- (float)zRotation;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (void)runAction:(id)arg1;
- (id)childNodeWithName:(id)arg1;
- (struct SKCSprite { int (**x1)(); id x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; boolx27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; float x38; struct SKCSprite {} *x39; id x40; boolx41; boolx42; struct __CVBuffer {} *x43; struct __CVBuffer {} *x44; struct __CVOpenGLESTextureCache {} *x45; id x46; id x47; unsigned int x48; unsigned int x49; unsigned int x50; struct { float x_51_1_1; float x_51_1_2; } x51; struct { float x_52_1_1; float x_52_1_2; } x52; struct { float x_53_1_1; float x_53_1_2; } x53; struct { struct { float x_1_2_1; float x_1_2_2; } x_54_1_1; struct { float x_2_2_1; float x_2_2_2; } x_54_1_2; } x54; boolx55; struct __CVBuffer {} *x56; struct __CVBuffer {} *x57; boolx58; struct { struct { union _GLKVector4 { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; float x_2_4_3; float x_2_4_4; } x_1_3_2; struct { float x_3_4_1; float x_3_4_2; float x_3_4_3; float x_3_4_4; } x_1_3_3; float x_1_3_4[4]; } x_1_2_1; unsigned char x_1_2_2[4]; float x_1_2_3[3]; } x_59_1_1[4]; } x59; struct { /* ? */ } *x60; struct { /* ? */ } *x61; struct { struct { float x_1_2_1; float x_1_2_2; } x_62_1_1; struct { float x_2_2_1; float x_2_2_2; } x_62_1_2; struct { float x_3_2_1; float x_3_2_2; } x_62_1_3; struct { float x_4_2_1; float x_4_2_2; } x_62_1_4; } x62; struct { struct { float x_1_2_1; float x_1_2_2; } x_63_1_1; struct { float x_2_2_1; float x_2_2_2; } x_63_1_2; } x63; int x64; struct { struct { float x_1_2_1; float x_1_2_2; } x_65_1_1; struct { float x_2_2_1; float x_2_2_2; } x_65_1_2; } x65; struct SKCSprite {} *x66; union _GLKMatrix4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; float x_1_2_9; float x_1_2_10; float x_1_2_11; float x_1_2_12; float x_1_2_13; float x_1_2_14; float x_1_2_15; float x_1_2_16; } x_67_1_1; float x_67_1_2[16]; } x67; struct list<SKCSprite *, std::__1::allocator<SKCSprite *> > { struct __list_node_base<SKCSprite *, void *> { struct __list_node<SKCSprite *, void *> {} *x_1_2_1; struct __list_node<SKCSprite *, void *> {} *x_1_2_2; } x_68_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCSprite *, void *> > > { unsigned long x_2_2_1; } x_68_1_2; } x68; struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *> > {} *x69; struct list<SKCSprite *, std::__1::allocator<SKCSprite *> > {} *x70; unsigned int x71; unsigned int x72; boolx73; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_74_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_74_1_2; } x74; struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *> > { struct __tree<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *> > { struct __tree_node<SKCSprite *, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<SKCSprite *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<SKCSprite *> > { unsigned long x_3_3_1; } x_1_2_3; } x_75_1_1; } x75; struct unordered_set<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *> > { struct __hash_table<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *> > { struct unique_ptr<std::__1::__hash_node<SKCAction *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<SKCAction *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *> *> > > { struct __hash_node<SKCAction *, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<SKCAction *, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<SKCAction *, void *> *>, std::__1::allocator<std::__1::__hash_node<SKCAction *, void *> > > { struct __hash_node_base<std::__1::__hash_node<SKCAction *, void *> *> { struct __hash_node<SKCAction *, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::hash<SKCAction *> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::equal_to<SKCAction *> > { float x_4_3_1; } x_1_2_4; } x_76_1_1; } x76; float x77; float x78; float x79; id x80; struct { float x_81_1_1; float x_81_1_2; } x81; id x82; boolx83; struct { struct { float x_1_2_1; float x_1_2_2; } x_84_1_1; struct { float x_2_2_1; float x_2_2_2; } x_84_1_2; } x84; struct { float x_85_1_1; float x_85_1_2; } x85; unsigned int x86; struct { float x_87_1_1; float x_87_1_2; } x87; struct { float x_88_1_1; float x_88_1_2; } x88; float x89; float x90; float x91; float x92; float x93; float x94; struct { float x_95_1_1; float x_95_1_2; float x_95_1_3; float x_95_1_4; } x95; struct { float x_96_1_1; float x_96_1_2; float x_96_1_3; float x_96_1_4; } x96; float x97; float x98; float x99; struct { struct { float x_1_2_1; float x_1_2_2; } x_100_1_1; struct { float x_2_2_1; float x_2_2_2; } x_100_1_2; } x100; id x101; }*)csprite;
- (void)removeFromParent;
- (void)removeAction:(id)arg1;
- (BOOL)needsUpdate;
- (void)removeAllActions;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)setParent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setZPosition:(float)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)actionForKey:(id)arg1;
- (float)zPosition;
- (void)setScale:(float)arg1;
- (float)alpha;
- (void)removeChild:(id)arg1;
- (id)init;
- (id)name;
- (id)copy;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)setPaused:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_size;
- (BOOL)isUserInteractionEnabled;
- (id)_parent;
- (void)setAlpha:(float)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)isPaused;
- (void)addChild:(id)arg1;
- (id)children;
- (struct CGPoint { float x1; float x2; })position;
- (id)parent;
- (void)setName:(id)arg1;
- (id)_info;
- (void)_update:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
