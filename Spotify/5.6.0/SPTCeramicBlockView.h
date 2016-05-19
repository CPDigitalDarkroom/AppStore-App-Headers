/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SPTCeramicStyle, UIImage;


@protocol SPTCeramicBlockView <NSObject>
@property (nonatomic,readonly) SPTCeramicStyle * ceramicStyle; 
@property (nonatomic,readonly) int blockIndex; 
@property (assign,nonatomic) CGRect frameWithinTableView; 
@property (assign,nonatomic) CGRect externalVerticalScrollFrame; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@required
-(CGRect)externalVerticalScrollFrame;
-(void)setExternalVerticalScrollFrame:(CGRect)arg1;
-(void)invalidateBlockLayout;
-(SPTCeramicStyle *)ceramicStyle;
-(CGRect)frameWithinTableView;
-(void)setFrameWithinTableView:(CGRect)arg1;
-(void)reloadData;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(id)arg1;
-(int)blockIndex;
-(void)deselectAllItems;

@end

