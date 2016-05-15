/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNDesignableViews/TFNDesignableView.h>
#import <Twitter/TFNTwitterDesignableCardView.h>

@protocol TFNCanvasEventHandler;
@class TFNTwitterStatus, TFNTwitterAvatarImageView, T1StatusAuthorView, TFNAttributedTextView, TFNButton, NSString;

@interface T1NativeConversationCardCanvasView : TFNDesignableView <TFNTwitterDesignableCardView> {

	char _showAuthor;
	TFNTwitterStatus* _status;
	id<TFNCanvasEventHandler> _eventHandler;
	TFNTwitterAvatarImageView* _avatarView;
	T1StatusAuthorView* _authorView;
	TFNAttributedTextView* _textView;
	TFNButton* _choiceOneButton;
	TFNButton* _choiceTwoButton;

}

@property (nonatomic,retain) TFNTwitterStatus * status;                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) id<TFNCanvasEventHandler> eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) TFNTwitterAvatarImageView * avatarView;                     //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) T1StatusAuthorView * authorView;                            //@synthesize authorView=_authorView - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * textView;                           //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) TFNButton * choiceOneButton;                                //@synthesize choiceOneButton=_choiceOneButton - In the implementation block
@property (nonatomic,retain) TFNButton * choiceTwoButton;                                //@synthesize choiceTwoButton=_choiceTwoButton - In the implementation block
@property (assign,nonatomic) char showAuthor;                                            //@synthesize showAuthor=_showAuthor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize imageSize; 
+(id)variantIDs;
-(id)initWithVariantID:(id)arg1 account:(id)arg2 status:(id)arg3 eventHandler:(id)arg4 ;
-(void)setShowAuthor:(char)arg1 ;
-(void)setAuthorView:(T1StatusAuthorView *)arg1 ;
-(T1StatusAuthorView *)authorView;
-(TFNButton *)choiceOneButton;
-(TFNButton *)choiceTwoButton;
-(void)setChoiceOneButton:(TFNButton *)arg1 ;
-(void)setChoiceTwoButton:(TFNButton *)arg1 ;
-(id)_createButtonWithIndex:(unsigned)arg1 ;
-(void)_frames:(CGRect*)arg1 forWidth:(float)arg2 ;
-(id)_textModelForString:(id)arg1 ;
-(char)_showButtonsForCurrentVariant;
-(char)showAuthor;
-(void)updateWithModel:(id)arg1 ;
-(id<TFNCanvasEventHandler>)eventHandler;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setTextView:(TFNAttributedTextView *)arg1 ;
-(TFNAttributedTextView *)textView;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(TFNTwitterAvatarImageView *)avatarView;
-(void)setAvatarView:(TFNTwitterAvatarImageView *)arg1 ;
-(void)setEventHandler:(id<TFNCanvasEventHandler>)arg1 ;
@end

