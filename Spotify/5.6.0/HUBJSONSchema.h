/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUBJSONSchema <NSObject>
@property (nonatomic,readonly) id<HUBViewModelJSONSchema> viewModelSchema; 
@property (nonatomic,readonly) id<HUBComponentModelJSONSchema> componentModelSchema; 
@property (nonatomic,readonly) id<HUBComponentImageDataJSONSchema> componentImageDataSchema; 
@required
-(id<HUBComponentModelJSONSchema>)componentModelSchema;
-(id)createNewPath;
-(id)viewModelFromJSONDictionary:(id)arg1 featureIdentifier:(id)arg2;
-(id<HUBViewModelJSONSchema>)viewModelSchema;
-(id<HUBComponentImageDataJSONSchema>)componentImageDataSchema;
-(id)copy;

@end

