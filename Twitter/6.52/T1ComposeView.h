/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class T1ComposeRichTextView, T1ComposeReplyContextView, UITextView;

@interface T1ComposeView : UIView {

	T1ComposeRichTextView* _richTextView;
	char _showHeader;
	T1ComposeReplyContextView* _header;
	int _keyboardHeight;

}

@property (nonatomic,readonly) T1ComposeReplyContextView * header;                       //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) T1ComposeRichTextView * richTextView; 
@property (assign,nonatomic) int keyboardHeight;                                         //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (getter=isTextViewLoaded,nonatomic,readonly) char textViewLoaded; 
@property (assign,getter=shouldShowHeader,nonatomic) char showHeader;                    //@synthesize showHeader=_showHeader - In the implementation block
-(T1ComposeRichTextView *)richTextView;
-(void)updateHeaderFrame;
-(void)setKeyboardHeight:(int)arg1 ;
-(id)composerTextFont;
-(void)_fontSizeDidUpdate;
-(char)shouldShowHeader;
-(char)isTextViewLoaded;
-(int)keyboardHeight;
-(void)setShowHeader:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UITextView *)textView;
-(T1ComposeReplyContextView *)header;
@end

