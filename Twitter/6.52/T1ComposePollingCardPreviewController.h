/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Twitter/T1DurationPickerViewDelegate.h>
#import <Twitter/T1MediaChooserDelegate.h>

@protocol T1ComposePollingCardPreviewControllerDelegate;
@class TFNTwitterAccount, TFNTwitterCompositionPollingCard, TFNPaddedButton, TFNButton, T1AccordionButton, NSMutableArray, T1MediaChooser, T1ComposePollingCardPreviewView, NSString;

@interface T1ComposePollingCardPreviewController : TFNViewController <UITextFieldDelegate, T1DurationPickerViewDelegate, T1MediaChooserDelegate> {

	id<T1ComposePollingCardPreviewControllerDelegate> _delegate;
	TFNTwitterAccount* _account;
	TFNTwitterCompositionPollingCard* _pollingCard;
	TFNPaddedButton* _removeButton;
	TFNButton* _addChoiceButton;
	T1AccordionButton* _durationButton;
	NSMutableArray* _textFields;
	TFNButton* _addImageButton;
	TFNButton* _altTextButton;
	T1MediaChooser* _mediaChooser;

}

@property (nonatomic,retain) T1ComposePollingCardPreviewView * view; 
@property (assign,nonatomic,__weak) TFNPaddedButton * removeButton;                                          //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) TFNButton * addChoiceButton;                                             //@synthesize addChoiceButton=_addChoiceButton - In the implementation block
@property (assign,nonatomic,__weak) T1AccordionButton * durationButton;                                      //@synthesize durationButton=_durationButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * textFields;                                                    //@synthesize textFields=_textFields - In the implementation block
@property (assign,nonatomic,__weak) TFNButton * addImageButton;                                              //@synthesize addImageButton=_addImageButton - In the implementation block
@property (assign,nonatomic,__weak) TFNButton * altTextButton;                                               //@synthesize altTextButton=_altTextButton - In the implementation block
@property (nonatomic,retain) T1MediaChooser * mediaChooser;                                                  //@synthesize mediaChooser=_mediaChooser - In the implementation block
@property (assign,nonatomic,__weak) id<T1ComposePollingCardPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterCompositionPollingCard * pollingCard;                                 //@synthesize pollingCard=_pollingCard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaChooserDidFinish:(id)arg1 ;
-(void)_didTapRemoveButton:(id)arg1 ;
-(void)_didTapAltTextButton:(id)arg1 ;
-(void)setPollingCard:(TFNTwitterCompositionPollingCard *)arg1 ;
-(TFNTwitterCompositionPollingCard *)pollingCard;
-(T1MediaChooser *)mediaChooser;
-(void)setMediaChooser:(T1MediaChooser *)arg1 ;
-(void)removePollComposeViewAnimated:(char)arg1 ;
-(void)_updateTextFields;
-(void)_updateDurationButton;
-(void)_animateShowPollComposeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateRemainingCountInTextField:(id)arg1 forString:(id)arg2 ;
-(TFNButton *)addChoiceButton;
-(void)_didTapAddChoiceButton:(id)arg1 ;
-(T1AccordionButton *)durationButton;
-(void)_didTapDurationButton:(id)arg1 ;
-(TFNButton *)addImageButton;
-(void)_didTapAddImageButton:(id)arg1 ;
-(void)_animateRemovePollComposeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_didSelectPhoto:(id)arg1 withAltText:(id)arg2 ;
-(void)_sendScribingWithElement:(id)arg1 action:(id)arg2 ;
-(void)_updateCompositionText:(id)arg1 forTextField:(id)arg2 ;
-(void)pickerView:(id)arg1 didChangeTimeInterval:(double)arg2 ;
-(void)setPhotoImageAsset:(id)arg1 ;
-(void)setRemoveButton:(TFNPaddedButton *)arg1 ;
-(void)setAddChoiceButton:(TFNButton *)arg1 ;
-(void)setDurationButton:(T1AccordionButton *)arg1 ;
-(void)setAddImageButton:(TFNButton *)arg1 ;
-(TFNButton *)altTextButton;
-(void)setAltTextButton:(TFNButton *)arg1 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)setDelegate:(id<T1ComposePollingCardPreviewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<T1ComposePollingCardPreviewControllerDelegate>)delegate;
-(void)loadView;
-(void)_updateView;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)textFields;
-(TFNPaddedButton *)removeButton;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)focusView;
-(void)setTextFields:(NSMutableArray *)arg1 ;
@end

