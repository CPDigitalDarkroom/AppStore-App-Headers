/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNPagedGalleryCellView.h>

@class NSArray, NSString, NSMutableArray, UILabel, TFNButton;

@interface T1UserGalleryCellAvatarListView : TFNPagedGalleryCellView {

	char _highlighted;
	NSArray* _userRepresentations;
	/*^block*/id _avatarTapBlock;
	/*^block*/id _avatarLongPressBlock;
	/*^block*/id _viewMoreTapBlock;
	NSString* _viewMoreButtonText;
	NSMutableArray* _avatarViews;
	NSMutableArray* _activeAvatarViews;
	UILabel* _usernamesLabel;
	TFNButton* _viewMoreButton;
	NSString* _usernamesText;

}

@property (nonatomic,retain) NSMutableArray * avatarViews;                       //@synthesize avatarViews=_avatarViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeAvatarViews;                 //@synthesize activeAvatarViews=_activeAvatarViews - In the implementation block
@property (nonatomic,retain) UILabel * usernamesLabel;                           //@synthesize usernamesLabel=_usernamesLabel - In the implementation block
@property (nonatomic,retain) TFNButton * viewMoreButton;                         //@synthesize viewMoreButton=_viewMoreButton - In the implementation block
@property (nonatomic,copy) NSString * usernamesText;                             //@synthesize usernamesText=_usernamesText - In the implementation block
@property (nonatomic,retain) NSArray * userRepresentations;                      //@synthesize userRepresentations=_userRepresentations - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) id avatarTapBlock;                                    //@synthesize avatarTapBlock=_avatarTapBlock - In the implementation block
@property (nonatomic,copy) id avatarLongPressBlock;                              //@synthesize avatarLongPressBlock=_avatarLongPressBlock - In the implementation block
@property (nonatomic,copy) id viewMoreTapBlock;                                  //@synthesize viewMoreTapBlock=_viewMoreTapBlock - In the implementation block
@property (nonatomic,copy) NSString * viewMoreButtonText;                        //@synthesize viewMoreButtonText=_viewMoreButtonText - In the implementation block
+(id)_usernameFont;
+(float)heightShowingViewMoreButton:(char)arg1 ;
-(void)willDisplay;
-(void)_addAvatarViewsIfNecessary;
-(NSString *)viewMoreButtonText;
-(void)_viewMoreTapped;
-(void)_avatarTapAction:(id)arg1 ;
-(void)_avatarLongPressAction:(id)arg1 ;
-(NSString *)usernamesText;
-(id)avatarLongPressBlock;
-(id)avatarTapBlock;
-(void)setUserRepresentations:(NSArray *)arg1 ;
-(void)setViewMoreButtonText:(NSString *)arg1 ;
-(NSArray *)userRepresentations;
-(void)setAvatarTapBlock:(id)arg1 ;
-(void)setAvatarLongPressBlock:(id)arg1 ;
-(id)viewMoreTapBlock;
-(void)setViewMoreTapBlock:(id)arg1 ;
-(NSMutableArray *)avatarViews;
-(void)setAvatarViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activeAvatarViews;
-(void)setActiveAvatarViews:(NSMutableArray *)arg1 ;
-(UILabel *)usernamesLabel;
-(void)setUsernamesLabel:(UILabel *)arg1 ;
-(TFNButton *)viewMoreButton;
-(void)setViewMoreButton:(TFNButton *)arg1 ;
-(void)setUsernamesText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)_update;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)cleanup;
@end

