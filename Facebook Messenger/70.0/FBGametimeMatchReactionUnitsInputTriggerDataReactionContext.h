/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSArray, NSString, FBGametimeMatchReactionUnitsInputTriggerDataReactionContextViewerCoordinates, FBGametimeMatchReactionUnitsInputTriggerDataReactionContextNtContext;

@interface FBGametimeMatchReactionUnitsInputTriggerDataReactionContext : FBGraphQLInput {

	NSArray* _unitStyles;
	NSString* _unitStylesPersistId;
	NSArray* _actionStyles;
	NSString* _actionStylesPersistId;
	NSArray* _componentStyles;
	NSString* _componentStylesPersistId;
	NSArray* _storyAttachmentStyles;
	NSString* _storyAttachmentStylesPersistId;
	NSArray* _storyHeaderStyles;
	NSString* _storyHeaderStylesPersistId;
	NSString* _surface;
	NSString* _requestType;
	NSString* _sessionId;
	FBGametimeMatchReactionUnitsInputTriggerDataReactionContextViewerCoordinates* _viewerCoordinates;
	FBGametimeMatchReactionUnitsInputTriggerDataReactionContextNtContext* _ntContext;

}

@property (nonatomic,copy) NSArray * unitStyles;                                                                                          //@synthesize unitStyles=_unitStyles - In the implementation block
@property (nonatomic,copy) NSString * unitStylesPersistId;                                                                                //@synthesize unitStylesPersistId=_unitStylesPersistId - In the implementation block
@property (nonatomic,copy) NSArray * actionStyles;                                                                                        //@synthesize actionStyles=_actionStyles - In the implementation block
@property (nonatomic,copy) NSString * actionStylesPersistId;                                                                              //@synthesize actionStylesPersistId=_actionStylesPersistId - In the implementation block
@property (nonatomic,copy) NSArray * componentStyles;                                                                                     //@synthesize componentStyles=_componentStyles - In the implementation block
@property (nonatomic,copy) NSString * componentStylesPersistId;                                                                           //@synthesize componentStylesPersistId=_componentStylesPersistId - In the implementation block
@property (nonatomic,copy) NSArray * storyAttachmentStyles;                                                                               //@synthesize storyAttachmentStyles=_storyAttachmentStyles - In the implementation block
@property (nonatomic,copy) NSString * storyAttachmentStylesPersistId;                                                                     //@synthesize storyAttachmentStylesPersistId=_storyAttachmentStylesPersistId - In the implementation block
@property (nonatomic,copy) NSArray * storyHeaderStyles;                                                                                   //@synthesize storyHeaderStyles=_storyHeaderStyles - In the implementation block
@property (nonatomic,copy) NSString * storyHeaderStylesPersistId;                                                                         //@synthesize storyHeaderStylesPersistId=_storyHeaderStylesPersistId - In the implementation block
@property (nonatomic,copy) NSString * surface;                                                                                            //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * requestType;                                                                                        //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                                                                                          //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) FBGametimeMatchReactionUnitsInputTriggerDataReactionContextViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) FBGametimeMatchReactionUnitsInputTriggerDataReactionContextNtContext * ntContext;                              //@synthesize ntContext=_ntContext - In the implementation block
-(void)setViewerCoordinates:(FBGametimeMatchReactionUnitsInputTriggerDataReactionContextViewerCoordinates *)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBGametimeMatchReactionUnitsInputTriggerDataReactionContextViewerCoordinates *)viewerCoordinates;
-(NSArray *)unitStyles;
-(void)setUnitStyles:(NSArray *)arg1 ;
-(NSString *)unitStylesPersistId;
-(void)setUnitStylesPersistId:(NSString *)arg1 ;
-(NSArray *)actionStyles;
-(void)setActionStyles:(NSArray *)arg1 ;
-(NSString *)actionStylesPersistId;
-(void)setActionStylesPersistId:(NSString *)arg1 ;
-(NSArray *)componentStyles;
-(void)setComponentStyles:(NSArray *)arg1 ;
-(NSString *)componentStylesPersistId;
-(void)setComponentStylesPersistId:(NSString *)arg1 ;
-(NSArray *)storyAttachmentStyles;
-(void)setStoryAttachmentStyles:(NSArray *)arg1 ;
-(NSString *)storyAttachmentStylesPersistId;
-(void)setStoryAttachmentStylesPersistId:(NSString *)arg1 ;
-(NSArray *)storyHeaderStyles;
-(void)setStoryHeaderStyles:(NSArray *)arg1 ;
-(NSString *)storyHeaderStylesPersistId;
-(void)setStoryHeaderStylesPersistId:(NSString *)arg1 ;
-(FBGametimeMatchReactionUnitsInputTriggerDataReactionContextNtContext *)ntContext;
-(void)setNtContext:(FBGametimeMatchReactionUnitsInputTriggerDataReactionContextNtContext *)arg1 ;
-(NSString *)requestType;
-(NSString *)surface;
-(void)setRequestType:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
@end

