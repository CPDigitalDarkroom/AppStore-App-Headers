/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1SlideshowViewController.h>

@protocol T1ProfileImageViewControllerDelegate;
@class TFNButton;

@interface T1ProfileImageViewController : T1SlideshowViewController {

	char _canEdit;
	id<T1ProfileImageViewControllerDelegate> _profileDelegate;
	TFNButton* _editButton;

}

@property (nonatomic,retain) TFNButton * editButton;                                                       //@synthesize editButton=_editButton - In the implementation block
@property (assign,nonatomic) char canEdit;                                                                 //@synthesize canEdit=_canEdit - In the implementation block
@property (assign,nonatomic,__weak) id<T1ProfileImageViewControllerDelegate> profileDelegate;              //@synthesize profileDelegate=_profileDelegate - In the implementation block
-(void)setProfileDelegate:(id<T1ProfileImageViewControllerDelegate>)arg1 ;
-(void)setChromeIsVisible:(char)arg1 ;
-(void)_didSelectEdit;
-(void)_layoutEditButton;
-(id<T1ProfileImageViewControllerDelegate>)profileDelegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setEditButton:(TFNButton *)arg1 ;
-(TFNButton *)editButton;
-(void)setCanEdit:(char)arg1 ;
-(char)canEdit;
@end

