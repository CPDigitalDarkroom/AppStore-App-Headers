/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsSimpleFormViewDataSourceDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBKeyboardObserverDelegate.h>

@protocol FBPaymentsSimpleFormViewControllerDelegate;
@class FBPaymentsSimpleFormViewDataSource, FBKeyboardObserver, FBContentInsetTracker, UITableView, NSString;

@interface FBPaymentsSimpleFormViewController : UIViewController <FBPaymentsSimpleFormViewDataSourceDelegate, FBKeyboardObserverDelegate> {

	FBPaymentsSimpleFormViewDataSource* _dataSource;
	FBKeyboardObserver* _keyboardObserver;
	FBContentInsetTracker* _contentInsetTracker;
	char _shouldShowDeleteButton;
	char _shouldShowSetDefaultButton;
	char _shouldDisableErrorMessage;
	/*^block*/id _setDefaultBlock;
	/*^block*/id _deleteBlock;
	UITableView* _tableView;
	id<FBPaymentsSimpleFormViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSimpleFormViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)focusFieldWithIdentifier:(id)arg1 ;
-(void)_adjustContentInsetsWithKeyboardRect:(CGRect)arg1 ;
-(void)configureWithButtonEnableStatus:(char)arg1 ;
-(void)setInfoSectionFooterViewModel:(id)arg1 ;
-(void)addOrUpdateLabelButtonWithText:(id)arg1 ;
-(void)resetFormContents;
-(id)collectedInfo;
-(id)completionStatuses;
-(id)initWithFormFieldByIdentifierMap:(id)arg1 formLayoutDefinition:(id)arg2 ;
-(void)addDeleteButtonWithText:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)addSetDefaultButtonWithText:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)removeSetDefaultButton;
-(void)setContentForFieldWithIdentifier:(id)arg1 contentText:(id)arg2 ;
-(void)simpleFormViewDataSource:(id)arg1 reloadIndexSet:(id)arg2 ;
-(void)simpleFormViewDataSourceDidUpdateForm:(id)arg1 ;
-(void)simpleFormViewDataSource:(id)arg1 updateErrorDescription:(id)arg2 ;
-(id)headerViewForSimpleFormViewDataSource:(id)arg1 ;
-(void)simpleFormViewDataSourceDidSelectLabelButton:(id)arg1 ;
-(void)simpleFormViewDidTapSetDefaultButtonForDataSource:(id)arg1 ;
-(void)simpleFormViewDidTapDeleteButtonForDataSource:(id)arg1 ;
-(void)simpleFormViewDidTapInfoSectionFooterPrimaryButtonForDataSource:(id)arg1 ;
-(void)simpleFormViewDidTapInfoSectionFooterSecondaryButtonForDataSource:(id)arg1 ;
-(void)setSetDefaultSectionFooterViewModel:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsSimpleFormViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPaymentsSimpleFormViewControllerDelegate>)delegate;
-(char)resignFirstResponder;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

