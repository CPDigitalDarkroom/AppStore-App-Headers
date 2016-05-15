/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/T1ResizableHeaderSubheader.h>

@protocol TFNTwitterStatusSocialContext;
@class NSString;

@interface T1ProfileSocialContextViewController : TFNItemsDataViewController <T1ResizableHeaderSubheader> {

	id _subheaderInfo;
	/*^block*/id _preferredHeightCheckBlock;
	id<TFNTwitterStatusSocialContext> _socialContext;
	/*^block*/id _selectionBlock;
	float _lastTableWidth;
	NSString* _dividerTitle;

}

@property (assign,nonatomic) float lastTableWidth;                                         //@synthesize lastTableWidth=_lastTableWidth - In the implementation block
@property (nonatomic,retain) NSString * dividerTitle;                                      //@synthesize dividerTitle=_dividerTitle - In the implementation block
@property (nonatomic,retain) id<TFNTwitterStatusSocialContext> socialContext;              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy) id selectionBlock;                                              //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id subheaderInfo;                                             //@synthesize subheaderInfo=_subheaderInfo - In the implementation block
@property (nonatomic,copy) id preferredHeightCheckBlock;                                   //@synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock - In the implementation block
-(void)setSubheaderInfo:(id)arg1 ;
-(id)subheaderInfo;
-(void)setPreferredHeightCheckBlock:(id)arg1 ;
-(void)setSocialContext:(id<TFNTwitterStatusSocialContext>)arg1 ;
-(id<TFNTwitterStatusSocialContext>)socialContext;
-(id)preferredHeightCheckBlock;
-(void)_loadSections;
-(void)setLastTableWidth:(float)arg1 ;
-(float)lastTableWidth;
-(void)setSocialContext:(id)arg1 text:(id)arg2 ;
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(float)preferredHeight;
-(void)update:(char)arg1 ;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
-(NSString *)dividerTitle;
-(void)setDividerTitle:(NSString *)arg1 ;
@end

