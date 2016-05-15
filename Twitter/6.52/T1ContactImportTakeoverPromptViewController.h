/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1TakeoverPromptViewController.h>

@class TFNButton;

@interface T1ContactImportTakeoverPromptViewController : T1TakeoverPromptViewController {

	/*^block*/id _importContactsBlock;
	/*^block*/id _notNowBlock;
	TFNButton* _notNowButton;

}

@property (nonatomic,retain) TFNButton * notNowButton;              //@synthesize notNowButton=_notNowButton - In the implementation block
+(void)showFromViewController:(id)arg1 withAccount:(id)arg2 importContactsBlock:(/*^block*/id)arg3 notNowBlock:(/*^block*/id)arg4 ;
-(id)scribePage;
-(id)scribeSection;
-(id)scribeComponent;
-(void)takeoverPromptView:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)takeoverPromptView:(id)arg1 didTapCloseButton:(id)arg2 ;
-(id)initWithAccount:(id)arg1 importContactsBlock:(/*^block*/id)arg2 notNowBlock:(/*^block*/id)arg3 ;
-(TFNButton *)notNowButton;
-(void)_didTapNotNowButton;
-(void)setNotNowButton:(TFNButton *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
@end

