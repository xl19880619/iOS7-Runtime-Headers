/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class <DOMNodeFilter>, DOMNode;

@interface DOMTreeWalker : DOMObject  {
}

@property(readonly) DOMNode * root;
@property(readonly) unsigned int whatToShow;
@property(readonly) <DOMNodeFilter> * filter;
@property(readonly) BOOL expandEntityReferences;
@property(retain) DOMNode * currentNode;


- (void)setCurrentNode:(id)arg1;
- (id)currentNode;
- (id)previousNode;
- (BOOL)expandEntityReferences;
- (unsigned int)whatToShow;
- (id)root;
- (id)lastChild;
- (id)filter;
- (id)parentNode;
- (id)nextSibling;
- (id)firstChild;
- (void)finalize;
- (void)dealloc;
- (id)nextNode;
- (id)previousSibling;

@end
