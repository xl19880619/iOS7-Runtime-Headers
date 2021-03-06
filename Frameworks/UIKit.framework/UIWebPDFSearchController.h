/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPDFDocument, NSOperationQueue, NSString, NSArray, NSMutableArray, NSObject<UIWebPDFSearchControllerDelegate>;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
    unsigned int _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    unsigned int _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_results;
    NSString *_searchString;
    UIPDFDocument *_documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned int startingPageIndex;
    float documentScale;
    unsigned int resultLimit;
}

@property NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
@property(retain) UIPDFDocument * documentToSearch;
@property float documentScale;
@property unsigned int startingPageIndex;
@property unsigned int resultLimit;
@property(readonly) BOOL searching;
@property(readonly) BOOL paused;
@property(retain) NSArray * results;
@property(retain) NSString * searchString;


- (id)searchString;
- (void)setSearchString:(id)arg1;
- (void)setResults:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)resume;
- (void)cancel;
- (id)results;
- (BOOL)searching;
- (void)searchDidTimeOut:(id)arg1;
- (void)search:(id)arg1;
- (void)_clearSearchQueue;
- (unsigned int)_actualStartingPageIndex;
- (BOOL)paused;
- (id)searchDelegate;
- (void)setStartingPageIndex:(unsigned int)arg1;
- (unsigned int)startingPageIndex;
- (void)searchDidBegin:(id)arg1;
- (id)documentToSearch;
- (void)searchLimitHit:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchWasCancelled:(id)arg1;
- (unsigned int)resultLimit;
- (void)setResultLimit:(unsigned int)arg1;
- (void)setSearchDelegate:(id)arg1;
- (void)setDocumentScale:(float)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (float)documentScale;
- (void)pause;

@end
