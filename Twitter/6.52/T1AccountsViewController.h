/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNPickerViewController.h>
#import <Twitter/TFNPickerViewControllerDelegate.h>
#import <Twitter/TFNValuePickerDataSource.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>
#import <Twitter/TFNAdaptiveWizardFlowDelegate.h>
#import <Twitter/T1AccountAdder.h>
#import <Twitter/T1AccountChooser.h>

@class TFNTwitterAccount, NSArray, T1PickableAccountAdapter, NSString;

@interface T1AccountsViewController : TFNPickerViewController <TFNPickerViewControllerDelegate, TFNValuePickerDataSource, TFNLayoutMetricsEnvironment, TFNAdaptiveWizardFlowDelegate, T1AccountAdder, T1AccountChooser> {

	TFNTwitterAccount* _currentAccount;
	/*^block*/id _didChooseAccountBlock;
	/*^block*/id _didAddAccountBlock;
	NSArray* _accounts;
	T1PickableAccountAdapter* _adapter;

}

@property (nonatomic,retain) NSArray * accounts;                                //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) T1PickableAccountAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                               //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * currentAccount;                //@synthesize currentAccount=_currentAccount - In the implementation block
@property (nonatomic,copy) id didChooseAccountBlock;                            //@synthesize didChooseAccountBlock=_didChooseAccountBlock - In the implementation block
-(TFNTwitterAccount *)currentAccount;
-(id)initWithDataSource:(id)arg1 options:(unsigned)arg2 ;
-(id)valuesForPicker:(id)arg1 ;
-(id)initiallyPickedValueForPicker:(id)arg1 ;
-(id)addValueMessagesForPicker:(id)arg1 ;
-(id)showMoreValuesMessageForPicker:(id)arg1 ;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(void)setCurrentAccount:(TFNTwitterAccount *)arg1 ;
-(void)setDidChooseAccountBlock:(id)arg1 ;
-(void)_updateAccounts:(char)arg1 ;
-(void)_accountsDidChange;
-(id)didChooseAccountBlock;
-(void)_finishAddingAccount:(id)arg1 signUp:(char)arg2 ;
-(void)_canNotUnenrollWithAccount:(id)arg1 ;
-(id)initAsEditable:(char)arg1 ;
-(void)_pickAccount:(id)arg1 willDismiss:(char)arg2 ;
-(void)_addAccount:(char)arg1 sender:(id)arg2 ;
-(void)_prepareToRemoveAccount:(id)arg1 ;
-(void)pickerViewControllerDidCancel:(id)arg1 ;
-(void)pickerViewController:(id)arg1 didConfirmWithSections:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned)arg3 willConfirm:(char)arg4 willDismiss:(char)arg5 ;
-(void)pickerViewController:(id)arg1 willAddValueToSectionAtIndex:(unsigned)arg2 withAddValueMessage:(id)arg3 index:(unsigned)arg4 sender:(id)arg5 ;
-(char)pickerViewController:(id)arg1 shouldRemoveValue:(id)arg2 fromSectionAtIndex:(unsigned)arg3 ;
-(void)pickerViewController:(id)arg1 didRemoveValue:(id)arg2 fromSectionAtIndex:(unsigned)arg3 ;
-(void)pickerViewController:(id)arg1 didReorderValue:(id)arg2 fromPosition:(unsigned)arg3 toPosition:(unsigned)arg4 inSectionAtIndex:(unsigned)arg5 ;
-(void)pickerViewControllerWillShowMoreValues:(id)arg1 ;
-(void)flowDidComplete:(id)arg1 ;
-(void)_showSystemAccountRemovalAlert;
-(float)maxContentHeight;
-(id)titleForDeleteConfirmationButtonForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(T1PickableAccountAdapter *)adapter;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)_update;
-(void)_updateButtons;
-(void)_removeAccount:(id)arg1 ;
-(NSArray *)accounts;
-(void)setAccounts:(NSArray *)arg1 ;
@end

