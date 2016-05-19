/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol HUBComponentImageDataJSONSchema <NSObject>
@property (nonatomic,retain) id<HUBJSONStringPath> styleStringPath; 
@property (nonatomic,retain) NSDictionary * styleStringMap; 
@property (nonatomic,retain) id<HUBJSONURLPath> URLPath; 
@property (nonatomic,retain) id<HUBJSONStringPath> placeholderIconIdentifierPath; 
@required
-(id<HUBJSONURLPath>)URLPath;
-(id<HUBJSONStringPath>)placeholderIconIdentifierPath;
-(id<HUBJSONStringPath>)styleStringPath;
-(NSDictionary *)styleStringMap;
-(void)setStyleStringPath:(id)arg1;
-(void)setStyleStringMap:(id)arg1;
-(void)setURLPath:(id)arg1;
-(void)setPlaceholderIconIdentifierPath:(id)arg1;
-(id)copy;

@end

