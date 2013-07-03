/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController, NSArray, PKPrinter, UIPrinterSearchingView, NSMutableArray, PKPrinterBrowser;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    UIPrintPanelViewController *_printPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    BOOL _clearCurrentPrinter;
}

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)addPrinter:(id)arg1 moreComing:(BOOL)arg2;
- (void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2;
- (void)dealloc;
- (void)selectPrinter:(id)arg1;
- (void)updateSearching;
- (void)startPrinterBrowser;
- (void)adjustPopoverSize;
- (void)willEnterForeground;
- (void)stopPrinterBrowser;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end