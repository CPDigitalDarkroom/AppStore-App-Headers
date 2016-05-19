/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSURL;


@protocol SPTHubMutableBlock <SPTHubBlock>
@property (nonatomic,readonly) char createdLocally; 
@property (nonatomic,copy) NSNumber * preferredIndex; 
@property (nonatomic,copy) NSString * componentIdentifier; 
@property (nonatomic,copy) NSString * headerTitle; 
@property (nonatomic,copy) NSString * footerTitle; 
@property (nonatomic,copy) NSURL * footerTargetURL; 
@property (nonatomic,copy) NSString * footerTargetViewTitle; 
@property (nonatomic,copy) NSURL * backgroundImageURL; 
@required
-(NSString *)componentIdentifier;
-(NSNumber *)preferredIndex;
-(void)setPreferredIndex:(id)arg1;
-(void)setComponentIdentifier:(id)arg1;
-(void)addItemWithType:(unsigned)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4 icon:(int)arg5 imageStyle:(int)arg6 imageDecoration:(int)arg7 isPreviewable:(char)arg8 styleHint:(id)arg9 targetURL:(id)arg10 metaDataTitle:(id)arg11 metaData:(id)arg12 descriptionText:(id)arg13 loggingData:(id)arg14;
-(void)addHeaderAccessoryButtonWithTitle:(id)arg1 targetURL:(id)arg2;
-(void)removeHeaderAccessoryButton;
-(void)setNeedsRenderingUpdate;
-(char)createdLocally;
-(NSURL *)footerTargetURL;
-(void)setFooterTargetURL:(id)arg1;
-(NSString *)footerTargetViewTitle;
-(void)setFooterTargetViewTitle:(id)arg1;
-(void)removeAllItems;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(id)arg1;
-(NSString *)footerTitle;
-(void)setFooterTitle:(id)arg1;
-(void)setBackgroundImageURL:(id)arg1;
-(NSURL *)backgroundImageURL;

@end

