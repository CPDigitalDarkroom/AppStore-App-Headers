/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1CustomerFeedbackCommentViewControllerDelegate;
@class TFNTwitterAccount, NSString, TFNTwitterUser, TFNTextView, TFNToolbar, TFNBarButtonItem, UILabel, NSNumber;

@interface T1CustomerFeedbackCommentViewController : TFNViewController <UITextViewDelegate, TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	NSString* _feedbackID;
	id<T1CustomerFeedbackCommentViewControllerDelegate> _delegate;
	TFNTwitterUser* _businessUser;
	TFNTextView* _commentsTextView;
	TFNToolbar* _keyboardToolbar;
	TFNBarButtonItem* _addCommentButton;
	UILabel* _placeholderLabel;
	NSNumber* _score;
	unsigned _feedbackType;

}

@property (nonatomic,retain) TFNTwitterUser * businessUser;                                                    //@synthesize businessUser=_businessUser - In the implementation block
@property (nonatomic,retain) TFNTextView * commentsTextView;                                                   //@synthesize commentsTextView=_commentsTextView - In the implementation block
@property (nonatomic,retain) TFNToolbar * keyboardToolbar;                                                     //@synthesize keyboardToolbar=_keyboardToolbar - In the implementation block
@property (nonatomic,retain) TFNBarButtonItem * addCommentButton;                                              //@synthesize addCommentButton=_addCommentButton - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                       //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) NSNumber * score;                                                                 //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned feedbackType;                                                            //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) NSString * feedbackID;                                                          //@synthesize feedbackID=_feedbackID - In the implementation block
@property (assign,nonatomic,__weak) id<T1CustomerFeedbackCommentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                      //@synthesize account=_account - In the implementation block
-(void)_closeButtonTapped:(id)arg1 ;
-(TFNTwitterUser *)businessUser;
-(NSString *)feedbackID;
-(id)initWithFeedbackID:(id)arg1 account:(id)arg2 businessUser:(id)arg3 score:(id)arg4 feedbackType:(unsigned)arg5 ;
-(void)setCommentsTextView:(TFNTextView *)arg1 ;
-(TFNTextView *)commentsTextView;
-(void)setKeyboardToolbar:(TFNToolbar *)arg1 ;
-(void)setAddCommentButton:(TFNBarButtonItem *)arg1 ;
-(TFNToolbar *)keyboardToolbar;
-(void)_keyboardDidUpdate:(id)arg1 ;
-(void)_updateAddCommentButtonEnabled;
-(char)_hasCommentText;
-(void)_setInteractionEnabled:(char)arg1 ;
-(void)setBusinessUser:(TFNTwitterUser *)arg1 ;
-(NSNumber *)score;
-(void)setDelegate:(id<T1CustomerFeedbackCommentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<T1CustomerFeedbackCommentViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_updatePlaceholderVisibility;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setScore:(NSNumber *)arg1 ;
-(void)setFeedbackType:(unsigned)arg1 ;
-(unsigned)feedbackType;
-(TFNBarButtonItem *)addCommentButton;
-(void)_addCommentButtonTapped:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)_dismissAnimated:(char)arg1 ;
@end

