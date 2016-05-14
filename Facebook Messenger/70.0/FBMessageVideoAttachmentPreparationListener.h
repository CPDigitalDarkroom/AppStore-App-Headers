/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMessageVideoAttachmentPreparationListener <NSObject>
@required
-(void)willPrepareVideoContent:(id)arg1 forMessageOfflineId:(id)arg2;
-(void)didCancelPreparation;
-(void)didProgressExportTo:(float)arg1;
-(void)willExport;
-(void)didFailToExportWithError:(id)arg1;
-(void)didExportData:(id)arg1 toLocalURL:(id)arg2;
-(void)didEstimateFileSize:(int)arg1;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned)arg2;
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned)arg2;
-(void)didProgressUploadTo:(float)arg1;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2;
-(void)didCancelUploadWithMetrics:(id)arg1;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1;

@end

